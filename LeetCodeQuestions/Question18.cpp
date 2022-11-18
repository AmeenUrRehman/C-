#include<iostream>
using namespace std;

void merge(int arr1[] , int size1 , int arr2[] , int size2 , int arr3[]){
    int i = 0 ; int j = 0;
    int k = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }

        else{
            arr3[k++] = arr2[j++];
        }
    }
    while( i < size1){
        arr3[k++] = arr1[i++];
    }

    while (j < size2){
        arr3[k++] = arr2[j++];
    }
       

}

int print(int arr[] , int size3){
    for (int l = 0; l < size3 ; l++ ){
        cout << arr[l] << " ";
    }

    cout << endl;

}


int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};

    merge(arr1 , 5 , arr2  , 3 , arr3);
    print(arr3 , 8);
}