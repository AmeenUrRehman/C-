
void InOrder(TreeNode<int>* root, vector<int> &in){
    //Base Case
    if(root == NULL){
        return;
    }
    InOrder(root->left,in);
    in.push_back(root->data);
    InOrder(root->right,in);
}
vector<int> mergeArrays(vector<int> &a, vector<int> &b){
    vector<int> ans(a.size() + b.size());
    int i = 0, j = 0;
    int k = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }
    while(i < a.size()){
        ans[k++] = a[i];
        i++;
    }
    while(j < b.size()){
        ans[k++] = b[j];
        j++;
    }
    
    return ans;
}

TreeNode<int> *InOrderToBST(int s, int e, vector<int> &in){
    //Base Case
    if(s>e){
        return NULL;
    }
    int mid = s + (e -s )/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root->left = InOrderToBST(s, mid-1, in);
    root->right = InOrderToBST(mid+1, e, in);
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Step 1 - Store the InOrder
    vector<int> bst1 , bst2;
    InOrder(root1,bst1);
    InOrder(root2,bst2);
    
    vector<int> mergeArray = mergeArrays(bst1,bst2);
    int s = 0 , e = mergeArray.size()-1;
    return InOrderToBST(s,e,mergeArray);
    
}

/************************************* MORE OPTIMIZED *******************************************/
/****If Interviwer ask for S.C OF O(Height)*/
void convertIntoSortedDLL(TreeNode<int>* root, TreeNode<int>* &head){
    //Base Case
    if(root == NULL){
        return ;
    }
    convertIntoSortedDLL(root -> right, head);
    root->right = head;    
    if(head != NULL){
        head -> left = root;
    }
    head = root;
    convertIntoSortedDLL(root->left,head);
}

TreeNode<int>* mergeLinkedList(TreeNode<int>* head1, TreeNode<int>* head2){
    TreeNode<int>* head = NULL;
    TreeNode<int>* tail = NULL;
    
    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head1 -> right;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1 ->right;
            }
        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
                head2 = head2 -> right;
            }
            else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2 ->right;
            }
        }
        while(head1 != NULL){
            tail->right = head1;
            head1->left = tail;
            tail = head1;
            head1 = head1->right;
        }
        while(head2 != NULL){
            tail->right = head2;
            head2->left = tail;
            tail = head2;
            head2 = head2->right;
        }
         
    }
    return head;
}
int CountNodes(TreeNode<int>* head){
    int cnt = 0;
    TreeNode<int>* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->right;
    }
    return cnt;
}
TreeNode<int>* sortedLLToBST(TreeNode<int>* &head, int n){
    //Base Case
    if(n <= 0 || head == NULL){
        return NULL;
    }
    
    TreeNode<int>* left = sortedLLToBST(head,n/2);
    TreeNode<int>* root = head;
    root->left = left;
    head = head -> right;
    root->right = sortedLLToBST(head,n-n/2-1);
    return root;
    
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Step 1 - Store the InOrder
   /* vector<int> bst1 , bst2;
    InOrder(root1,bst1);
    InOrder(root2,bst2);
    
    vector<int> mergeArray = mergeArrays(bst1,bst2);
    int s = 0 , e = mergeArray.size()-1;
    return InOrderToBST(s,e,mergeArray);*/
    TreeNode<int> *head1 = NULL;
    convertIntoSortedDLL(root1,head1);
    head1->left = NULL;
    TreeNode<int> *head2 = NULL;
    convertIntoSortedDLL(root2,head2);
    head2->left = NULL;
    
    //Step - 2 Merge LL
    TreeNode<int>* head = mergeLinkedList(head1,head2);
    
    //Step -3 Convert LL to BST
    return sortedLLToBST(head,CountNodes(head));
}