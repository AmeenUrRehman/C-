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

    char setName(char name){
        return name;
    }

  

};

int main(){

    //Creation of Object
    Hero h1;
    h1.health = 70;
    h1.level = 'A';

    cout << " Size of h1 : " << sizeof(h1) << endl;
    cout << " Print of health : " << h1.health << endl;
    cout << " Print of level : " << h1.level << endl;
    // Throw error
    // cout << " Print of name : " << h1.name << endl;

    cout << "Print the size of name : " << sizeof(h1.getName()) <<endl;
    cout << "Print K : " << h1.setName('K') << endl;






}