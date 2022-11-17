#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout << "Size of the vector : " << v.capacity() << endl;

    v.push_back(1);
    cout << v.size() << endl;;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.clear();
    cout << v.size() << endl;
}