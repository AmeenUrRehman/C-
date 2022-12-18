#include<iostream>
using namespace std;

class Node{

    //Creating a Node
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }

        cout << "Memory is free for this -> " << val << endl;
    }
};

//Insertion at Head
void InsertAtHead(Node* head ,int d){
    
    //Empty List
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev =  temp;
        head = temp; 

    }
}

//Insertion at Tail
void InsertionAtTail(Node* tail , int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;

    }
    else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail  = temp;

    }
}

//Insertion at Position
void InsertionAtPosition(Node* &tail, Node* &head , int position , int d){
    
    //if for first position
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    Node* temp = new Node(d);
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //Inserting at last position
    if(temp -> next == NULL){
        InsertionAtTail(tail , d);
        return ;
    }

    //Inserting at any position
    Node* NodetoInsert = new Node(d);
    NodetoInsert -> next = temp -> next;
    temp ->next = NodetoInsert;
    temp -> next -> prev = NodetoInsert;
    NodetoInsert -> prev = temp;

}

//Traversing a linked list
void printNode(Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;

    }cout << endl;
}

// Calculating linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;

    }

    return len;
}

int main(){

    Node* node1 = new Node(10);
    Node* head =  node1; 
    Node* tail =  node1; 

    printNode(head);

    cout << "Length is : " << getLength(head) << endl;

    //Printing head
    InsertAtHead(head , 11);
    printNode(head);
    InsertAtHead(head , 12);
    printNode(head);
    InsertAtHead(head , 13);
    printNode(head);
    InsertAtHead(head , 14);
    printNode(head);
    InsertAtHead(head , 15);
    printNode(head);

    //Printing tail
    InsertionAtTail(tail , 16);
    printNode(head);
    InsertionAtTail(tail , 17);
    printNode(head);

    //Printing at Position
    InsertionAtPosition(tail, head, 3, 100);
    printNode(head);


    return 0;
}