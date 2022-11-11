#include<iostream>
using namespace std;
// Swap Alternative 
void printArray(int arr[] , int size){
    for(int i =1 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}

void swapAlternative(int arr[] , int size){
    for(int i = 0 ; i <size ; i + 2){
        if ( i+1 < size){
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main(){
    int even[8] ={1,2,3,4,5,6,7,8};
    swapAlternative(even , 8);
    printArray(even , 8);

    
}