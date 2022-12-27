#include<iostream>
#include<queue>
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

node* buildTree(node* root){

    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);
    
    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for Inserting Left : " << data <<endl;
    root -> left = buildTree(root -> left);
    cout << "Enter the data for inserting right : "<< data << endl;
    root -> right = buildTree(root -> right);
    return root;
}

void levelofTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //Purana Level Complete traversal ho chuka hai
            cout << endl;
            if(!q.empty()){

                // Queue still has some child Nodes
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

node* buildFromlevelorder(node* root){
    queue<node*> q;
    cout <<  "Enter data for root : " ;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for : " <<temp -> data <<endl;
        int leftData;
        cin >> leftData;

        if(leftData == -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter right node for : " <<temp -> data <<endl;
        int rightData;
        cin >> rightData;

        if(rightData == -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }


    }
}

void inOrder(node* root){

    // Base Case
    if(root == NULL){
        return;
    }
    //L-N-R
    inOrder(root -> left); 
    cout << root -> data << " " ;
    inOrder(root -> right);

}
void PreOrder(node* root){

    // Base Case
    if(root == NULL){
        return;
    }
    //N-L-R
    cout << root -> data << " " ;
    PreOrder(root -> left); 
    PreOrder(root -> right);

}

void PostOrder(node* root){

    // Base Case
    if(root == NULL){
        return;
    }
    //L-R-N
    PostOrder(root -> left); 
    PostOrder(root -> right);
    cout << root -> data << " " ;
}

int main(){

    node* root = NULL;

    buildFromlevelorder(root);
    /*//Build Tree
    //eg = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout << "The Level Of Traversal is : " << endl;
    levelofTraversal(root);

    cout << "InOrder Traversal is : " ;
    inOrder(root);
    cout << endl;
    cout << "PreOrder Traversal is : " ;
    PreOrder(root);
    cout << endl;
    cout << "PostOrder Traversal is : " ;
    PostOrder(root);
    cout << endl;
*/

    return 0;
}