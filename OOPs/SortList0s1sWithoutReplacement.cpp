#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

Node* sortList(Node* &head){
    
    Node* zeroHead = new Node(-1);
    Node* zeroTail =  zeroHead;
    Node* OneHead = new Node(-1);
    Node* OneTail = OneHead;
    Node* TwoHead = new Node(-1);
    Node* TwoTail = TwoHead;

    Node* curr = head;

    //Create Seperate list 0s, 1s and 2s
    while(curr != NULL){

        int value = curr -> data;

        if (value == 0){
            InsertAttail(zeroTail, curr);
        }
        else if(value == 1 ){
            InsertAttail(OneTail, curr);
        }
        else if(value == 2){
            InsertAttail(TwoTail, curr);
        }

        curr = curr -> next;
    }

    //Merge these sorts

    if(OneHead -> next != NULL){
        zeroTail -> next = OneHead -> next;
    }
    else{
        zeroTail -> next = TwoHead -> next;
    }

    OneTail -> next = TwoHead -> next;
    TwoTail -> next = NULL;

    //Setup head
    head = zeroHead -> next;

    //Delete Dummy Nodes
    delete zeroHead;
    delete OneHead;
    delete TwoHead;

    return head;

}

void InsertAttail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next; 
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next ;

    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(0);
    Node* head = node1;
    Node* tail = node1;

    InsertAttail(tail,1);
    print(head);
    InsertAttail(tail,1);
    print(head);
    InsertAttail(tail , 0);
    print(head);

    sortList(head);
    print(head);


    return 0;
}
