#include<iostream>
using namespace std;

void update2(int& n){
    n++;
}

void update(int n){
    n++;
}

int main(){
    int i = 5;
    // Create a reference variable.
    int& j = i;
    cout << j << endl;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
    cout << i << endl;

    int n = 6;
    cout << " Before in pass by value : " << n <<  endl;
    update(n);
    cout << " After in pass by value : " << n << endl;
    
    cout << " Before in pass by reference : " << n <<  endl;
    update2(n);
    cout << " After in pass by reference : " << n << endl; 

    return 0;
}