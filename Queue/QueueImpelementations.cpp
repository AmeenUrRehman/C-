#include<iostream>
#include<queue>
using namespace std;

class Queue {


    public:
    int *arr;
    int size;
    int qfront;
    int rear;

    Queue(){
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int data){
        if(rear == size){
            cout << "Queueue is FULL." <<endl;
        }

        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue(){
        if(qfront == rear){
            return -1;
        }

        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                qfront = 0;
            }
        return ans;

        }
    }

    bool IsEmpty(){
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }

    int fqfront(){
        if(qfront == rear){
            return -1;
        }

        else{
            return arr[qfront];
        }
    }


};

int main(){

    Queue q ;
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(8);

    cout << q.IsEmpty() << endl;

    cout << "Front is " << q.fqfront() << endl;


    return 0;
}