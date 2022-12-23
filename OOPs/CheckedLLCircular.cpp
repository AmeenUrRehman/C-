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

void InsertAttail(Node* tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next; 
}

bool isCircular(Node* head){
    //Empty List
    if(head == NULL){
        return true;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        
        temp = temp -> next;
    }

    if (temp == head){
        return true;
    }
    return false;
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
    Node* tail = node1;

    InsertAttail(tail,12);
    print(tail);
    InsertAttail(tail,15);
    print(tail);

    if(isCircular(tail)){
        cout << "IT IS CIRCULAR LL" << endl;
    }
    else{
        cout << "NO !!!!" <<endl;
    }

    return 0;
}