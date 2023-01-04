class Solution{
  public:
    
    void solve(Node* root, int k, int &count, vector<int> path){
        //Base Case
        if(root == NULL){
            return;
        }
        path.push_back(root ->  data);
        //Left path
        solve(root -> left, k, count, path);
        //Right path
        solve(root -> right, k, count, path);
        
        //Check path sum is equal to K
        int size = path.size();
        int sum = 0;
        for(int i = size - 1; i >= 0; i--){
            sum += path[i];
            if(sum == k){
                count++;
            }
        }
        
        path.pop_back();
    
    }
  
    int sumK(Node *root,int k)
    {
        vector<int> path;
        int count = 0;
        solve(root, k, count, path);
        return count;
    }
};