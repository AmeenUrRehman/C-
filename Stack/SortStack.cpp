#include<iostream>
#include<stack>
using namespace std;


void SortedInsert(stack<int>&stack, int num){
    //Base Case
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    //Rescursive call

    SortedInsert(stack);
    stack.push(n);

}

void SortStack(stack<int>&stack){

    //Base Case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    //Rescursive call

    SortStack(stack);

    SortedInsert(stack, num);


}