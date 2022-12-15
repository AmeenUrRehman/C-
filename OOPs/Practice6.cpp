#include<iostream>
using namespace std;

class Human{

    public:
    int weight;
    int age;
    char name;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        return this->weight = w;
    }
};

class male: public Human {

    public:
    string color;

    void sleep(){
        cout << "Male Sleeping" << endl;
    }

};



int main(){

    male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.name << endl;
    cout << object1.color << endl;
    object1.sleep();
    object1.setWeight(80);
    cout << object1.weight << endl;
    



}