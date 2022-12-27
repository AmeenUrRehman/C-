#include<iostream>
#include<queue>
using namespace std;

class Deque {


    public:
    int *arr;
    int size;
    int qfront;
    int rear;

    Deque(int n){
        size = 10001;
        arr = new int[size];
        qfront = -1;
        rear = -1;
    }

    bool pushFront(int x){
        //Check full or not
        if((qfront== 0 && rear == size - 1) || (rear == (qfront -1)%(size -1))){
            return false;
        }

        else if(qfront == -1){
            qfront = rear  = 0;
        }

        else if(qfront == 0){
            qfront = size - 1;
        }
        else{
            qfront--;
        }

        arr[qfront] = x;
        return true;

    }

    };

int main(){

    Deque q(5) ;
    q.pushFront(5);
    q.pushFront(3);
    cout << q.pushFront(8) << endl ;

    return 0;
}