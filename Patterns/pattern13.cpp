#include<iostream>
using namespace std;

int main(){
    int n;
    int row , col ;
    cin>>n;
    row = 1;
    
    while(row<=n){
        col = 1;
        while(col <= n){
            char ch = 'A' + row + col - 2;
            cout<<ch ;
            col = col + 1;
        }

        cout <<endl;
        row = row +1;
        
    }
}