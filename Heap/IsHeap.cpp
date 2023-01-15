class Solution {
  public:
  
  //Finding the No. of Nodes present in BT
  int CountNodes(struct Node* root){
      //Base Case
      if(root == NULL){
          return 0;
      }
      int ans = 1 + CountNodes(root->left) + CountNodes(root->right);
      return ans;
  }
  
  bool isCBT(struct Node* root, int index, int cnt){
      if(root == NULL){
          return true;
      }
      if(index >= cnt){
          return false;
      }
      else{
          bool left = isCBT(root->left, 2*index + 1, cnt);
          bool right = isCBT(root->right, 2*index + 2, cnt);
          return (right && left);
      }
  }
  
  bool isMaxOrder(struct Node* root){
      //Leaf Node
      if(root->left == NULL && root->right == NULL){
          return true;
      }
      if(root->right == NULL){
          return (root->data > root->left->data);
      }
      else{
          bool left = isMaxOrder(root->left);
          bool right = isMaxOrder(root->right);
          
          return (left && right && (root->data > root->left->data && root->data > root->right->data));
      }
  }
  
  
    bool isHeap(struct Node* tree) {
        // Points to Remember
        /* - For Heap => It is a Complete Binary Tree
        - It Satisfies the heap property that max heap or min heap
        - Here by default it is max heap
        - Max Heap => Consists of parent node which is greater than their childrens always
        */
        //Code here
        int index = 0;
        int totalCount  = CountNodes(tree);
        //Checking the conditions for heap is it a CBT and MaxHeap
        if( isCBT(tree, index, totalCount) && isMaxOrder(tree)){
            return true;
        }
        else{
            return false;
        }
    }
};

/*****  Time Complexity is O(n) and Space Complexity is O(n)  *****/