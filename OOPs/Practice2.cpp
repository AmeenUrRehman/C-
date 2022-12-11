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
};


int main(){
    
    // Static Allocation
    Hero a; 
    a.level = 'A';
    cout << "Name is : " << a.getlevel() << endl;

    //Dynamically
    Hero *b = new Hero;
    b->setlevel('B');
    cout << "Now Name is : " << b->getlevel() << endl;
    //Another method
    (*b).setlevel('B');
    cout << "Now Now Name is : "<< (*b).getlevel() <<endl;


}