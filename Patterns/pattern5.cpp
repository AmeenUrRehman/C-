#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int row , col;
    row = 1;
    int count = 1;
    while(row <= n ){
        col = 1 ;
        while (col <= row){
            
            cout << count << " ";
            count++;

            col = col + 1;

        }

        cout << endl;
        row = row + 1;
    }


}