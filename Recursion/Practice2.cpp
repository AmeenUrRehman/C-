#include<iostream>
using namespace std;

int power(int n){

    // base case 
    if (n == 0)
    return 1;

    int pow = 2 * power(n-1);
    return pow;
}

int main(){
    int n;
    cin >> n;

    int answer = power(n);
    cout << "The power of 2 is : " << answer << endl;
}