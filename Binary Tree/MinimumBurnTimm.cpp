class Solution {
  public:
  
  // Create Mapping and return target Node
  Node* createParentMapping(Node* root, int target, map<Node*,Node*> &NodeToParent){
      Node* res = NULL;
      queue<Node*> q;
      q.push(root);
      NodeToParent[root] = NULL;
      
      while(!q.empty()){
          Node* front = q.front();
          q.pop();
          
          if(front -> data == target){
              res = front;
          }
          if(front -> left){
              NodeToParent[front -> left] = front;
              q.push(front -> left);
          }
          
          if(front -> right){
              NodeToParent[front -> right] = front;
              q.push(front -> right);
          }
          
    
      }
            return res;
  }
  
  int burnTree(Node* root,  map<Node*,Node*> &NodeToParent){
      map<Node* , bool> visited;
      queue<Node*> q;
      q.push(root);
      visited[root] = true;
      
      
      int ans = 0;
      while(!q.empty()){
          int size = q.size();
          bool flag = 0;
          for(int i = 0;  i<size ; i++){
              // Processing Neighbouring Nodes
              Node* front = q.front();
              q.pop();
              
              if(front -> left && !visited[front->left]){
                  flag =  1;
                  q.push(front->left);
                  visited[front->left] = 1;
              }
              if(front -> right && !visited[front->right]){
                  flag =  1;
                  q.push(front->right);
                  visited[front->right] = 1;
              }
              if(NodeToParent[front] && !visited[NodeToParent[front]]){
                  flag =  1;
                  q.push(NodeToParent[front]);
                  visited[NodeToParent[front]] = 1;
              }
          }
          
          if(flag == 1){
              ans++;
          }
      }
      return ans;
  }
    int minTime(Node* root, int target) 
    {

        map<Node* , Node*> nodeToParent;
        Node* targetNode = createParentMapping(root, target, nodeToParent);
        int ans = burnTree(targetNode, nodeToParent); 
        return ans;
    }
};


/// Time Complexity = O(N) & Space Complexity = O(N)