
#include<iostream>
#include<map>
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

bool detectloop(Node* head){

    if(head == NULL){
        return false;
    }

    map <Node* , bool> visited;
    Node* temp = head;

    while (temp != NULL)
    {
        //CYCLE FOUND
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
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
    Node* head = node1;
    Node* tail = node1;

    InsertAttail(tail,12);
    print(head);
    InsertAttail(tail,15);
    print(head);
    InsertAttail(tail , 17);
    print(head);

    tail -> next = head -> next;
    // print(head);

    if(detectloop(head)){
        cout << "Cycle is Present" << endl;
    }
    else{
        cout << "Cycle is not present"<<endl;
    }


    if(isCircular(tail)){
        cout << "IT IS CIRCULAR LL" << endl;
    }
    else{
        cout << "NO !!!!" <<endl;
    }

    return 0;
}