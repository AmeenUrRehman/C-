Node* deleteFromBST(Node* root, int val){
    //Base Case
    if(root == NULL){
        return root;
    }
    if(root -> data == val){
        // 0 Child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        // 1 Child
        /*Left Child*/
        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }

        /*Right Child*/
        if(root -> left == NULL && root -> right != NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        
        // 2 Child
        if(root -> left != NULL && root -> right != NULL){
            int mini = MinVal(root->right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }

    }
    else if(root-> data > val){
        //Left Me Jao
        root->left =  deleteFromBST(root -> left, val);
        return root;
    }
    else{
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}