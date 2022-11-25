#include<iostream>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;
    cout << "Enter the number : " << num << endl;
    cout << "Enter the pointer address : " << ptr << endl;
    cout << "Enter the value of pointer : " << *ptr << endl;
    int *q = ptr;
    q++;
    cout << "Enter the new value : " << q << endl;

}