#include<iostream>
using namespace std;

bool search(int arr[] , int n , int element){
    for(int i = 0 ; i < n ; i++){
        if (arr[i] == element){
            return true ;
        }
    }

    return false;
}


int main(){
   
   int size ;
   cout << "Enter the size of Array : ";
   cin >> size;
   int arr[100] = { 1 , 12 , 35 , 45 , 85 , 2 , 15 , 61 , -4 , -78};
   int key ; 
   cout << "Enter the element you want to search : " ; 
   cin >> key;

   cout << "Is the element present : " << search(arr , size , key) <<endl;
}