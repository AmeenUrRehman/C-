#include<iostream>
#include<queue>
using namespace std;

int main(){

    //Max Heap by Default
    priority_queue<int> pq;
    pq.push(1);
    pq.push(45);
    pq.push(51);
    pq.push(15);
    pq.push(12);

    cout << "Heap at Top : " << pq.top() << endl;
    pq.pop();
    cout << "Heap at Top : " << pq.top() << endl;
    cout << "Heap Size : " << pq.size() << endl;
    if(!pq.empty()){
        cout << "Not Empty" << endl;
    }
    else{
        cout << "Empty" <<endl;
    }

    //Min Heap
    priority_queue<int , vector<int> , greater<int> > minheap;
    minheap.push(1);
    minheap.push(45);
    minheap.push(51);
    minheap.push(15);
    minheap.push(12);

    cout << "Heap at Top : " << minheap.top() << endl;
    minheap.pop();
    cout << "Heap at Top : " << minheap.top() << endl;
    cout << "Heap Size : " << minheap.size() << endl;
    if(!minheap.empty()){
        cout << "Not Empty" << endl;
    }
    else{
        cout << "Empty" <<endl;
    }



}