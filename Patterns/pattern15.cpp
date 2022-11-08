#include<iostream>
using namespace std;

int main(){

    int n , row , col;
    cin>>n ;
    row = 1;
    while(row <= n){
        col = 1;
        char ch = ('A' + row + col - 2);
        while(col <= row){
            cout<<ch;
            ch++;
            col = col + 1;
        }
        cout<<endl;
        row  = row + 1;
    }

}