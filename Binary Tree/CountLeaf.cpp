#include<iostream>
using namespace std;

class node{

    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void inOrder(node* root , int &count){
    //Base Case
    if(root == NULL){
        return;
    }

    inOrder(root  -> left, count);
    if(root -> left == NULL && root -> right == NULL){
        count++;
    }
    inOrder(root -> right,count);
}

int NodeLeafNodes(node<int>* root){
    int count = 0;
    inOrder(root, count);


    return count;

}



int main(){
    
    node* root = new node(d);

}