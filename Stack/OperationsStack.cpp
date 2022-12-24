#include<iostream>
#include<stack>
using namespace std;

int main(){

    //Creation of Stack
    stack<int> stackOp;

    //Push Operations
    stackOp.push(2);
    stackOp.push(3);
    stackOp.push(4);

    //Pop Operations
    stackOp.pop(); /* 4 WILL BE REMOVED*/

    //Print All Operations
    cout << "Check Top Element : " << stackOp.top() << endl;
    cout << "Check Empty or Not : "<< stackOp.empty() << endl;
    cout << "Size of Stack : "<< stackOp.size() << endl;

    return 0;
}