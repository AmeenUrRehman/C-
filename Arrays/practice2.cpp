#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int n ; 
    cout << "Enter the value of n : ";
    cin>>n;

    int first[15] = {1,2,3,4,5};
    printArray(first , n);

    char ch[5] = { 'a' , 'b' , 'c' , 'd' , 'f'};    
    cout << ch[1] << endl;

    return 0;

}