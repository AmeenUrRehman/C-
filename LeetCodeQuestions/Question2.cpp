#include<iostream>
using namespace std;

int main(){

    int n  , count = 0; 
    cin >> n;
    while ( n != 0){
        count++ ;
    }
    n = n >> 1;
    cout << "Count 1 bit : " << count  <<endl;

}