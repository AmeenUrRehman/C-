#include<iostream>
using namespace std;

class Hero{

    private:

    // Can access it only inside the this class
    char name;

    public:
    //Properties
    int health;
    char level;

    char getName(){
        return name;
    }

    char setName(char level){
        return name;
    }

    char getlevel(){
        return level;
    }

    char setlevel(char level){
        return level;
    }

    Hero(int health){
        this -> health = health;
    }
};

int main(){

    Hero Ramesh(10);
    cout << "Ramesh Health is : " << Ramesh.health << endl;

}