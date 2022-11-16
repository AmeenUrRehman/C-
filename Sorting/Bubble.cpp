#include<iostream>
using namespace std;

int printArray(int arr[] , int size){
    for(int k = 0 ; k < size ; k++){
        cout << arr[k] << " ";
    }

    cout << endl;

}

int main(){
    int arr[5] = {6,1,3,5,78};
    int size = 5;

    for(int i = 1; i<size ; i++){
        for(int j = 0 ; j <size - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    int answer = printArray(arr , 5);
}