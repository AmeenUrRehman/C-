#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque <int> d;
    d.push_back(1);
    d.push_front(1);
    cout << d.size() << endl;
    
}