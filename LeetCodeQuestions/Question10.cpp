#include<iostream>
using namespace std;

int firstOccurance(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2 ;
    int ans = -1 ;
    
    
    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;                                    
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        else if (arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}

int lastOccurance(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2 ;
    int ans = -1 ;
    
    
    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;                                    
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        else if (arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}


int main(){

    int even[5] = {1,2,3,3,4};
    int indexfirst = firstOccurance(even , 5 , 3);
    int indexlast = lastOccurance(even , 5 , 3);

    cout << "The firstOccurance of 3 at index : " << indexfirst << endl;
    cout << "The lastOccurance of 3 at index : " << indexlast << endl;

    int TotalOccurance = (indexlast - indexfirst) + 1;
    cout << "Total Occurance of 3 is : " << TotalOccurance << endl;





    
}