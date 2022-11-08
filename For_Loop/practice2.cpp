#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout<<"Enter the value of n : " <<endl;
    cin>>n;

    int i = 1;

    for (; ;){
        if (i <= n ){
            cout<<i;
        }
        else{
            break;
        }
        cout<<endl;
        i = i + 1;
    }

}