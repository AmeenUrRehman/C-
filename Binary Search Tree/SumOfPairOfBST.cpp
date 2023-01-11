void inOrder(BinaryTreeNode<int>* root, vector<int>& in){
    if(root == NULL){
        return;
    }
    inOrder(root->left, in);
    in.push_back(root->data);
    inOrder(root->right, in);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> inOrderVal;
    inOrder(root, inOrderVal);
    int i = 0; int j = inOrderVal.size()-1;
    while(i<j){
        int sum = inOrderVal[i] + inOrderVal[j];
        if(sum == target){
            return true;
        }
        else if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;

}