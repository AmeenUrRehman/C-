#include<iostream>
#include<queue>
using namespace std;

int main(){

    //Create a Queue
    queue<int> q ;
    q.push(11);
    q.push(12);
    q.push(14);
    q.push(19); 
    cout << "Size of queue is : " << q.size() << endl;

    cout << "Front is of queue is :" << q.front() << endl;
     
    q.pop();
    cout << "Size of queue now : " << q.size() << endl;

    if(q.empty()){
        cout << "Queue is Empty" <<endl;
    }
    else{
        cout << "Queue is not Empty" << endl;
    }

    return 0;

}