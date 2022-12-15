#include<iostream>
using namespace std;

class Animal {

    public:
    int age ;
    int weight ;

    public:
    void speak(){
        cout << " Speaking " << endl;
    }
};

// Single Inheritance
class Dog : public Animal {

};

//Multi - level Inheritance
class Cat : public Dog{

};

// Multiple Inheritance
class smart : public Dog  , public Animal {

};

int main(){

    Dog d;
    d.speak();

    Cat c;
    c.speak();

    smart s;
    s.speak();
}