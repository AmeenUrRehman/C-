#include<iostream>
using namespace std;

int main(){
    
    int n, col , row ;
    cin>> n;
    char start = 'A';

    row = 1;
    while(row <= n){
        col = 1; 

        while (col <= n){
            cout<<start;
            start = start + 1;
            col = col +1;
            
        }

        cout << endl; 
        row = row + 1;
    }

    
}