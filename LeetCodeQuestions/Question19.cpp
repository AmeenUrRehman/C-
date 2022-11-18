#include<iostream>
using namespace std;

int print(int arr[] , int size){
    for(int j = 0 ; j < size ; j++){
        cout << arr[j] << " ";
    }

    cout << endl;
}
int main(){
    int arr[5] = { 1 ,0,2,0,13};
    int size = 5;
    int nonZero = 0;
    for(int i = 0 ; i < size ; i++){
        if (arr[i] != 0){
            swap(arr[i] , arr[nonZero]);
            nonZero++;

        }

    }

    print(arr , 5);

}