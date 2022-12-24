#include<iostream>
#include<stack>
using namespace std;

InsertAtBottom(stack<int> &stack , int element){
    if(stack.empty()){
        stack.push(element);
        return ;
    }

    int num  = stack.top();
    stack.pop();

    //Recursive Call
    InsertAtBottom(stack,num);
    stack.push(num);
}

void reverseStack(stack<int> &stack){
    //Base Case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    //Recursive Call
    reverseStack(stack);
    InsertAtBottom(stack, num);
}