#include<iostream>
using namespace std;

int fibn(int n){
    if (n == 0){
        return 0;
    }

    if (n == 1){
        return 1;
    }

    int ans = fibn(n-1) + fibn(n - 2);

}

int main(){
    int n ; 
    cout << "Enter the fibannaco number : ";
    cin >> n;

    int answer = fibn(n);
    cout << answer << endl;
}