#include<iostream>
using namespace std;

class KQueue {

    public:
    int n ; 
    int k ;
    int freespot;
    int *arr;
    int *front;
    int *rear;
    int *next; 

    public:
    KQueue(int n,  int k){
        this -> n = n;
        this -> k = k;
        front = new int[k];
        rear = new int[k];
        for(int i = 0 ; i < k ; i++){
            front[i] = -1;
            rear[i] =  -1;
        }
        next = new int[n];
        for(int i = 0; i< n ; i++){
            next[i] = i + 1;
        }
        next[n -1] = -1;
        arr = new int[n];

        freespot = 0;
    }
    
    void enqueue(int data, int qn){
        // Check Overflow
        if(freespot == -1){
            cout << "No Empty Space present." << endl;
            return;
        }

        // Find first free Index
        int index = freespot;

        //Update FreeSpot
        freespot = next[index];

        //Check Whether first element 
        if(front[qn - 1] == -1){
            front[qn - 1] = index;
        }

        else{
            //Link New Element with the previous Element
            next[rear[qn - 1]] = index;
        }

        //Update kro Index
        next[index] = -1;
        
        //Update rear
        rear[qn - 1] = index;

        //Push Element
        arr[index] = data;

    }

    int dequeue(int qn){
        //Under Flow
        if(front[qn - 1] == -1){
            cout << "Queue UnderFlow" << endl;
            return -1;
        }

        //Find Index
        int index = front[qn - 1];

        //Front ko Agye baadhao
        front[qn - 1] = next[index];

        //Freesplot remove
        next[index] = freespot;

        freespot = index;

        return arr[index];



    }
};




int main(){

    KQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(20 ,1);
    q.enqueue(30, 1);
    q.enqueue(40, 2);
    q.enqueue(50,1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;

    cout << q.dequeue(1) << endl;


}