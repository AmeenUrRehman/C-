#include<iostream>
using namespace std;

int factorial(int n){
    // Base Case
    if (n == 0){
        return 1;
    }

    int fact = n * factorial(n - 1);
    
    return fact;
}

int main(){
    int n;
    cout << "Enter the value of n : " ;
    cin >> n;

    int answer = factorial(n);
    cout << "Factorial is : " << answer << endl;
}