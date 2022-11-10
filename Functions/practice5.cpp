#include<iostream>
using namespace std;

int PassbyValue(int num){
    num++;

    cout << "The value of n in passbyvalue: " <<num <<endl; 
}

int main(){

    int n ;
    cout<<"Enter value of n : ";
    cin >> n;
    PassbyValue(n);
    cout<<"The value of n in main: " << n <<endl;

}