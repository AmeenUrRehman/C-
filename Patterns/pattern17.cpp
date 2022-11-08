#include<iostream>
using namespace std;

int main(){
    int n , col , row;
    cin>>n;

    row = 1;
    while(row <= n ){
        col = 1;
        while(col <= n-row+1){
            cout<<"*";
            col = col +1;
        }
        cout<<endl;
        row = row + 1;

    }
}