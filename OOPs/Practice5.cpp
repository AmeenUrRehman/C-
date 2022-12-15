#include<iostream>
using namespace std;

class Hero{

    public:
    int health;
    char level;

    Hero(int health , char level){
        this->health = health;
        this->level = level;
    }

    void print(){
        cout << "Health is : " << this->health << endl; 
        cout << "Level is : "<< this->level << endl;
    }

};

int main(){
    
    Hero Suresh(100 , 'C');
    Suresh.print();

    Hero Ramesh(Suresh);
    Ramesh.print();



}
