class Solution
{
    public:
    void flatten(Node *root)
    {
        Node* curr = root;
        while(curr != NULL){
            //If Left Exists
            if(curr -> left){
            Node* prev = curr -> left;
            while(prev->right){
                prev = prev->right;
            }
            
            prev->right = curr -> right;
            curr -> right = curr -> left;
            curr -> left = NULL;
        }
        //Change current to current's right
        curr = curr -> right;
        
        }
        //Left Part NULL
        // curr = root;
        // while(curr != NULL){
        //     curr -> left = NULL;
        //     curr = curr -> right;
        // }
    }
};