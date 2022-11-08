#include<iostream>
using namespace std;

int main(){

    int n ;
    cin >> n; 
    int row , col ;
    row = 1;
    while(row <=n){
        col = 1;
        while (col <= row){
            char ch = 'A' + row - 1 ;           
            cout<< ch;
            col = col + 1;
        }

        cout<<endl;
        row = row + 1 ;


    }


}