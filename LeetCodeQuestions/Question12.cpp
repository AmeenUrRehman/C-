#include<iostream>
using namespace std;

int getPivot(int arr[] , int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end -  start)/2; 
    while(start <end){
    if(arr[mid] >= arr[0]){
        start = mid + 1;
    }

    else {
        end = mid;
    }

    mid = start + (end -start)/2;

    }

    return start;

}

int BinarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start <end){
    if(arr[mid] == key){
        return mid;
    }

    else if(arr[mid] > key){
        end = mid -1;
    }

    else if(arr[mid]< key) {
        start = mid + 1;
    }
    
    mid = start + (end - start) /2 ;
    
}

return -1;
}

int main(){

    int arr[5] = {4,5,6,1,2};
    int pivot = getPivot(arr , 5);
    cout << "Pivot Index is : " << pivot << endl;
    int index = BinarySearch(arr , 5 , 4);
    cout << "Index is : "<<index <<endl;



}