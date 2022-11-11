#include<iostream>
using namespace std;

int main(){

    int size = 6;
    int arr[6] = { 1 , 2 , 5 , 4 , 3 , 5};

	int ans = 0 ;
    for (int i = 0 ; i <size ; i++){
        ans = ans^arr[i];
    }
    
    for (int i = 1 ; i <size ; i++){
        ans = ans^i;
    }
    
    cout << ans;
}