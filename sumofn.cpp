#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n ;
    int i = 1;
    cout<<"Enter the value of n: " << endl;
    cin >>n ;
    while (i <= n){
        sum = sum +i;
        i = i+1;
    }
    cout<<"The Sum of n Numbers is: "<<sum <<endl;
}