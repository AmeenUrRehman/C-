#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> fast;
        fast = fast -> next -> next;
    }

    return slow;
}

Node* merge(Node* left , Node* right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left != NULL && right != NULL){
        if(left ->  data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }

        else{
            temp -> next = right;
            temp = right;
            right = right -> next;

        }

        while(left != NULL){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        while(right != NULL){
            temp -> next = right;
            temp = right;
            right = right -> next;

        }
    }
    ans = ans -> next;
    return ans;
}



Node* MergeSort(Node* head){
    //Base Case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    //Break LL into two halves
    Node* Mid = findMid(head);
    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;

    //Recursive call to sort two halves
    left = MergeSort(left);
    right = MergeSort(right);

    // Merge both halves
    Node* result = merge(left, right);

    return result;
}