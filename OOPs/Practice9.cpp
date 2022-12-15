#include<iostream>
using namespace std;

class A{
    public:
    int a , b ;
    public:
    int add(){
        return a + b;
    }

    void operator+ (A &obj1){
        cout << "Hello Beta !!!" ;
    }

};

int main(){

    A obj1 , obj2;
    obj1.a;
    obj2.b;
    obj1 + obj2;


}