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
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0){
            zeroCount++; 
        }

        else if (temp -> data == 1){
            oneCount++;
        }

        else if (temp -> data == 2){
            twoCount++;
        }

        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }

        else if(oneCount != 0){
            temp ->data = 1;
            oneCount--;
        }

        else if(twoCount != 0){
            temp ->data = 1;
            twoCount--;
        }
        temp = temp -> next;
    }

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
