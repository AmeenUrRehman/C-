#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;

    // int mid = (start + end)/2; NOT EFFICIENT FOR LARGE VALUES
    int mid = start  + (end - start)/2;

    while(start <= end){
    if( arr[mid] == key){
        return mid;
    }
    else if(key > arr[mid]){
        start = mid + 1;
    }
    else{
        end = mid- 1;
    }

    mid = start  + (end - start)/2;

    }

    return -1;
}


int main(){
    int even[4] = { 2 , 4 , 8 , 12};
    int odd[5] = {2,4,6,8,10};

    int indexEven = BinarySearch(even , 4 , 12);
    cout << "The index of 12 is : " << indexEven << endl;

    
    int indexOdd = BinarySearch(odd , 5 , 2);
    cout << "The index of 2 is : " << indexOdd << endl;
}
