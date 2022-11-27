#include<iostream>
using namespace std;

inline int getMax(int a , int b){
    return (a>b) ? a : b;
}

int main(){
    int a = 1;
    int b = 2;

    int answer1 = getMax(a,b);

    a = a + 3;
    b = b - 1;

    int answer2 = getMax(a , b);

    cout  << "Answer1 is : " << answer1 << endl;
    cout << "Answer2 is : "<< answer2 << endl;
}