#include<iostream>
using namespace std;

int factorial(int num){

    int fact = 1;
    for(int i = 1 ; i <= num ; i++){
        fact = fact * i ;
    }

    return fact ;

}

int nCr(int num1 , int rem){

    int numerat = factorial(num1);
    int denomina = factorial(rem) * factorial(num1 - rem);
    int permutation = numerat / denomina;

    return permutation;

}


int main(){

    int n , r;
    cout << "Enter the value of n : ";
    cin >> n ;

    cout << "Enter the value of r : ";
    cin >> r;

    int answer = nCr(n , r);
    cout << "The nCr is : " << answer << endl;
}