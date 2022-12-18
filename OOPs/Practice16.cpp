#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next =  NULL;
    }
};

int getLength(Node* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head -> next;
    }

    return len;
}

Node* FindMiddleNode(Node* head){
    int len = getLength(head);
    int ans = (len /2 ) ;
    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp -> next;
        cnt++;
    }

    return temp;
}

int main(){

    Node* node1 = new Node(5);
    Node* head;
    ReverseLinkedList(head);


    return 0;
}