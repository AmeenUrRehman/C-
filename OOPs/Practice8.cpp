#include<iostream>
using namespace std;

class A {

    public:
    void sayHello(){
        cout << "Hello Beta !!!";
    };

    void sayHello(string name){
        cout << "Hello " << name << endl;
    };
};

int main(){
    A ak;
    ak.sayHello();
}