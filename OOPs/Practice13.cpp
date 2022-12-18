#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int d){
        this -> data;
        this -> next;

    }

    ~Node {
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }

        cout << "Memory is free for Node with data : " << value << endl;
    }
};




int main(){

}