#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerELement(vector<int> &arr, int n){
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    while(int i = n-1; i>= 0 ; i--){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
            
        }

        //Ans is Stack ka top
        ans[i] = s.top();
        s.push(curr);
        }

        return ans;
}