#include<iostream>
#include <climits>
using namespace std;

int findmax(int arr[] , int size){
    int max = INT_MIN;
    for(int i = 0 ; i<= size ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int findmin(int arr[] , int size){
    int min = INT_MAX;
    for (int i = 0 ; i <= size ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;

}

int main(){

    int n ;
    cout << "Enter the size of array : " ;
    cin >> n;



    int firstarr[100];
    for (int i = 0 ; i < n ; i++){
        cin >> firstarr[i];
    }

    int maximum = findmax(firstarr , n);
    cout << "Enter the maximum value : " <<maximum << endl;
    
    int minimum = findmin(firstarr , n);
    cout << "Enter the minimum value : " <<minimum << endl;

}