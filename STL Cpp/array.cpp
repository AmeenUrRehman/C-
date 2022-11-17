#include<iostream>
#include<array>
using namespace std;

int main(){

    int basic[3] = {1,2,3};
    array<int,4> a = {1,2,3,4};
    int size = a.size();

    for(int i = 0 ; i < size ; i++){
        cout << a[i] << " ";
        cout << endl;
    }

    cout << "Index at 2 : " << a.at(2) << endl;
    cout << "Front Value at array : " << a.front() << endl;
    cout << "Back Value at array : " << a.back() << endl;
    cout << "Empty or Not : " << a.empty() << endl;


}