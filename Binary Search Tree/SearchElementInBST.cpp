bool searchInBST(BinaryTreeNode<int> *root, int x) {
    //Base Case
    if(root == NULL){
        return false;
    }
    if(root -> data == x){
        return true;
    }
    
    if(root -> data > x){
        return searchInBST(root -> left, x);
    }
    else{
        return searchInBST(root -> right, x);
    }
}

/// *************************Optimized Sol*****************///

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    //Creating a Node
    BinaryTreeNode<int> *temp = root;
    while(temp != NULL){
        if(root->data == x){
            return true;
        }
        if(root->data >x){
            return searchInBST(root->left,x);
        }
        else{
            return searchInBST(root->right,x);
        }
    }
    return false;
}