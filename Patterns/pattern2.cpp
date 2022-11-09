#include<iostream>
using namespace std;

int main(){

    int n;
    int j, i;
    int count = 1;
    cout<<"Enter the Value of N: ";
    cin>>n;
    i = 1;
    while(i<=n){
        j = 1;
        while(j <= n ){
            cout << count << " ";
            count++;
            j = j+1;
        }
        cout << endl;
        i = i+1;

    }

}