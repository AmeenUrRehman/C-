#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void levelOfTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }

}

Node* InsertIntoBST(Node* &root, int d){
    //Base Case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        //Right Part me Insert
        root -> right = InsertIntoBST(root ->right, d);
    } //Left Part me Insert
    else{
        root -> left = InsertIntoBST(root ->left, d);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;
    while(data != -1){
        InsertIntoBST(root, data);
        cin >> data;
    }
}

int main(){
    Node* root = NULL;
    cout << "Enter data to create BST " << endl;
    takeInput(root);

    cout << "How BST Looks like" << endl;
    levelOfTraversal(root);

}