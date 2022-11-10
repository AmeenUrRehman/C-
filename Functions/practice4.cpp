#include<iostream>
using namespace std;

void printcounting(int num){

    for (int i = 1; i <= num ; i++ ){
        cout<< i << " ";
    }
    cout<< endl;
}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin >> n ;
    
    printcounting(n);

    return 0;
 ;

}