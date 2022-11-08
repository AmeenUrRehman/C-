#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a :" <<endl;
    cin >> a ;
    if (a > 0){
        cout<<"This is Positive Number."<<endl;

    }

    else if (a < 0) {
        cout<<"This is Negative Number."<<endl;
    }

    else {
        cout << "This is zero " <<endl;
    }
}