#include<iostream>
using namespace std;

bool BinarySearchRecursion(int arr[] , int start , int end , int key , int size){
    // Base Case
    if(start > end){
        return false;
    }

    int mid = start  + (end - start)/2;

    if (arr[mid] == key){
        return true;
    }

    if (arr[mid] < key){
        return BinarySearchRecursion(arr , mid + 1 , end , key , size);
    }
    else{
        return BinarySearchRecursion(arr , start , mid - 1 , key , size);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 12;
    int start = 0 ;
    int end = size - 1;

    cout << "Present or Not Present : " << BinarySearchRecursion(arr , start , end , key , size) << endl;
}