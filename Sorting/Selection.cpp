#include<iostream>
using namespace std;

int printArray(int arr[] , int size){
    for(int k  = 0 ; k < size ; k++){
        cout << arr[k] << " ";
    }
    cout <<endl;
}

int main(){
    int arr[5] = {64,25,11,0,2};
    int size = 5;
    for(int i = 0; i< size ; i++){
        int MinIndex = i;
        for (int j = i + 1 ; j < size ; j++){
            if(arr[j] < arr[MinIndex]){
                MinIndex = j;
            }
        }
    swap(arr[MinIndex] , arr[i]);

    }

    int answer = printArray(arr , 5);

}