#include<iostream>
using namespace std;

int main(){
    int a , b ;
    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    char op ;
    cout << "Enter the Operation : ";
    cin >> op ;

    switch(op){
        case '+': cout<< "Add the numbers : " << (a + b) <<endl;
        break;
        case '-': cout<< "Sub the numbers : " << (a - b) <<endl;
        break;
        case '*': cout<< "Mul the numbers : " << (a * b) <<endl;
        break;
        case '/': cout<< "Div the numbers : " << (a / b) <<endl;
        break;
        case '%': cout<< "Rem the numbers : " << (a % b) <<endl;
        break;
        default : 
        cout << "This is Mini-Calculator.";

        
    }
}