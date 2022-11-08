#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1, j;
    while(i<=n){
        j=1;
        while(j<=n){
            cout << j ;
            j = j+1;
        }

        cout << endl;
        i = i+1;
    }
}