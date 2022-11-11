#include<iostream>
using namespace std;

int main(){

    int ans = 0 ;
    int size  = 5;
    int arr[5] = { 1 , 2 , 1 , 2 , 3};
    for (int i = 0 ; i < size ; i++){
        ans = ans^arr[i];
    }

    cout<< ans ; 
   
}