#include<iostream>
#include<stack>
using namespace std;

 void solve(stack<int> &s, int x){
    //Base Case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //Recursive call
    solve(s , x);
    s.push(num);
 }

stack<int> pushAtBottom(stack<int> &myStack, int x){
    solve(myStack, x);
    retunr myStack
}