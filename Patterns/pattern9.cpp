#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int row, col;
    row = 1 ;
    while (row <= n){
        col = 1 ; 
        int value = row;
        while(col <= row){
            cout << row - col + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row  + 1;
    }
}