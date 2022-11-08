#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << " Enter the value of n : " ;
    cin >> n ;
    int prod = 1 , sum = 0;

    while ( n != 0){
        int digit = n %10;
        prod = prod * digit;
        sum = sum  + digit;

        n = n / 10;
        
    }

    int answer = prod - sum;
    cout<<"The Answer of this question is : " <<answer <<endl;


}