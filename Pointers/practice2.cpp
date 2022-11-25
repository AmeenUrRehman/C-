#include<iostream>
using namespace std;

int main(){
    int arr[10] = {12,25,45,75};
    cout << "The address of first memory block is : " << arr << endl;
    cout << "The address of 2 memory block is try : " << &arr[0] << endl;
    cout << "The address of 3 memory block is : " << *arr << endl;
    cout << "The address of 4 memory block is : " << *arr + 1 << endl;
    cout << "The address of 5 memory block is : " << *(arr+1) << endl;
    cout << "The address of 6 memory block is : " << *(arr+2) << endl;
    cout << "The address of 7 memory block is : " << arr[2] << endl;

    int temp[10] = {1,2};
    cout << "1st" << sizeof(temp) <<endl;
    cout << "2nd" << sizeof(*temp) <<endl;
    cout << "3rd" << sizeof(&temp) <<endl;


    return 0;
}