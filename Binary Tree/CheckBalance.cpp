class Solution{
    public:
    pair<bool, int> isBalancedFast(Node* root){
        if(root == NULL){
            pair<bool, int> p = make_pair(true,0);
            return p;
        }
        
        pair<int,int> left = isBalancedFast(root -> left);
        pair<int,int> right = isBalancedFast(root -> right);
        bool leftAns = left.first;
        bool RightAns = right.first;
        
        bool diff = abs(left.second - right.second) <= 1;
        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        if(leftAns && RightAns && diff){
            ans.first = true;
        }else{
            ans.first = false;
        }
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        isBalancedFast(root).first;
    }
};