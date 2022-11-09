#include<iostream>
using namespace std;

int main(){
    int n  = 12;
    cout << "Enter the value of n : " << n << endl;

    char ch = 'A';
    switch (n) {
        case 4 :
        cout << "Enter this is 4th case ";
        break;

        case 8 :
        cout << "Enter this is 8th case ";

        case 12 :
        switch(ch){
            case 'A':
            cout << "This is A for Apple."<<endl;
            break;
        }
        cout << "Enter this is 12th case ";
    }
}