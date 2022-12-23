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
private:
Node* reverse(Node* head){
        Node* curr  = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;

        }
        return prev;
    }

void insertAtTail(struct Node* &head, struct Node* t&ail, int data){

    Node* temp = new Node(val);
    if (head == NULL){

        head = temp;
        tail =  temp;
         
    }

    else{
        tail -> next = temp;
        tail = temp;
    }
}

struct Node* addtwoLists(struct Node* first, struct Node* second){
    
    Node* ansHead = NULL;
    Node* andTail = NULL;
    int carry = 0;
    while(first != NULL && second != NULL){
        int sum = carry + first -> data + second -> data;
        int digit = sum % 10;

        insertAtTail(ansHead , ansTail, digit);

        carry = sum / 10;
        first = first -> next;
        second = second -> next;
    }
    while(first != NULL){
        int sum = carry + first -> data;
        int digit = sum % 10;
        insertAtTail(ansHead , ansTail, digit);
        carry = sum / 10;
        first = first -> next;

    }
    while(second != NULL){
        int sum = carry + second -> data;
        int digit = sum % 10;
        insertAtTail(ansHead , ansTail, digit);
        carry = sum / 10;
        second = second -> next;

    }

    while(carry != 0){
        int sum = carry;
        int digit = sum % 10;
        insertAtTail(ansHead , ansTail, digit);
        carry = sum / 10;
    }

    return ansHead;

}

public:
// Function to add two Numbers represented by Linked List
struct Node* addtwoLists(struct Node* first, struct Node* second){

    // Step 1 - Reverse the input LL
    first = reverse(first);
    second = reverse(second);

    //Step 2 - add 2 LL
    Node* ans = add(first, second);

    //Step 3 - reverse the final List
    ans = reverse(ans);

    return ans;
}