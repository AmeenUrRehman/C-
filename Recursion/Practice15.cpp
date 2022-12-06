#include<iostream>
using namespace std;

int Partition(int arr[] , int s , int e){

    int pivot = arr[s];
    int cnt = 0;
    for(int i =s+1 ; i <=e ; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    // PivotRight Place
    int PivotIndex = s + cnt;

    swap(arr[PivotIndex] , arr[s]);

    //Work on Left and Right Part
    int  i = s ,j = e;
    while(i < PivotIndex && j  > PivotIndex){
        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < PivotIndex && j  > PivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }

    return PivotIndex;

}

void quickSort(int arr[] , int s , int e){

    // BaseCase
    if(s >= e){
        return ;
    }

    //Partiton
    int p  = Partition(arr , s , e);

    //Left Part
    quickSort(arr , s , p - 1);

    //Right Part
    quickSort(arr , p +1 , e);
}

int main(){

    int arr[5] = {2,4,1,6,7};
    int n = 5;

    quickSort(arr , 0 , n -1);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    
}