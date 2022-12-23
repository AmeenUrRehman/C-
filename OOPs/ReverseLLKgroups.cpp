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

Node* ReverseLLK(Node* head , int k){
    //Base Call
    if(head == NULL){
        return NULL;
    }

    //Reverse first K nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;  
    }

    //Step 2
    if (next != NULL){
        head -> next = ReverseLLK(next , k);

    }

    return prev;

}

int main(){

    Node* node1 = new Node(12);
    node1 head;
    ReverseLLK(head, 2);


}