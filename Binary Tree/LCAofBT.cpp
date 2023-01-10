class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       // Base Case
       if(root == NULL){
           return NULL;
       }
       if(root -> data == n1 || root -> data == n2){
           return root;
       }
       Node* LeftAns = lca(root -> left, n1, n2);
       Node* RightAns = lca(root -> right, n1, n2);
       
       if (LeftAns != NULL && RightAns !=NULL){
           return root;
       }
       else if(LeftAns != NULL && RightAns == NULL){
           return LeftAns;
       }
       else if(LeftAns == NULL && RightAns != NULL){
           return RightAns;
       }
       else{
           return NULL;
       }
    }
};