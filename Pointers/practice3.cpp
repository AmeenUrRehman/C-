#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,45,65,75};
    char ch[6] = "abcde";

    cout << arr << endl;

    cout << ch << endl;

    char *c = &ch[0];
    cout << c  << endl;
}