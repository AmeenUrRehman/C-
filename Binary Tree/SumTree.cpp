class Solution
{
    public:
    pair<bool, int> isSumTreeFast(Node* root){
        //Base Case
        if(root == NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }//Leaf Node check
        if(root -> left == NULL && root -> right == NULL){
            pair<bool,int> p = make_pair(true,root -> data);
            return p;
        }
        
        pair<bool,int> leftAns = isSumTreeFast(root -> left);
        pair<bool, int> RightAns = isSumTreeFast(root -> right);
        
        bool isLeftSum = leftAns.first;
        bool isRightSum = RightAns.first;
        
        int leftSum = leftAns.second;
        int rightSum = RightAns.second;
        
        bool condn = root -> data == leftSum + rightSum;
        
        pair<bool , int> ans;
        if(isLeftSum && isRightSum && condn ){
            ans.first = true;
            ans.second = root -> data + leftSum + rightSum;
        }
        else{
            ans.first = false;
        }
        return ans;
        }
    bool isSumTree(Node* root)
    {
         return isSumTreeFast(root).first;
    }
};