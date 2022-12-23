#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this -> next =  NULL;

    }
};


Node* ReverseLinkedList(Node *head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}


int main(){

    Node* node1 = new Node(5);
    Node* head;
    ReverseLinkedList(head);


    return 0;
}