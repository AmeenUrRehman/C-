#include<iostream>
using namespace std;

int main(){
    int n;
    int row , col;
    cin>>n;
    char ch = 'A';

    row = 1;
    while(row <= n ){
        col = 1;
        while(col <= row){
            cout<<ch;
            ch++;
            col = col +1;
        }

        cout << endl;
        row = row + 1;
    }
}
