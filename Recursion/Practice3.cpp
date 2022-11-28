#include<iostream>
using namespace std;

int count(int n){

    // base case 
    if (n == 0)
    return 1;
    cout << n <<endl;
    
    count(n-1);

}

int main(){
    int n;
    cin >> n;
    int answer = count(n);
}