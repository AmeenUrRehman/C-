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

void InsertAttail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next; 
}

Node* UnsortedLL(Node* &head){
    //Empty List
    if(head == NULL){
        return NULL;
    }

    //Non-Empty List
    Node* curr = head;

    while(curr != NULL){
        if( (curr -> next != NULL) && curr -> data == curr ->next -> data){
            Node* next_next = curr -> next -> next;
            Node* nodeTodelete = curr -> next;
            delete(nodeTodelete);
            curr -> next = next_next;

        }

        else{
            curr = curr -> next;
        }
    }

    return head;
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
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    InsertAttail(tail,12);
    print(head);
    InsertAttail(tail,15);
    print(head);
    InsertAttail(tail,15);
    print(head);
    InsertAttail(tail,15);
    print(head);
    InsertAttail(tail , 17);
    print(head);

    Node* sorted = UnsortedLL(head);
    cout << "Sorted list is : " << sorted << endl;

    return 0;
}