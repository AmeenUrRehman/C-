#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size){
    // Base Case
    if(size == 0 || size == 1){
        return true;
    }

    if (arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingArr = isSorted(arr + 1 , size - 1);
        return remainingArr;
    }
}

int main(){
    int arr[5] = {1,2,3,45,5};
    int size = 5;

    bool ans = isSorted(arr , size);

    if (ans){
        cout << "Array is Sorted" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }
}