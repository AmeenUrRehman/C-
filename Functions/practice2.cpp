#include<iostream>
using namespace std;

int check_even(int num){

    if (num%2 == 0){
        return 1;
    }

    else {
        return 0;
    }

}

int main(){
    int a ;
    cout << "Enter the value of a : ";
    cin >> a;

    check_even(a);
    cout << "Check this : " << check_even(a)<<endl;
}