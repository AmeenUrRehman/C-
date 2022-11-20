#include<iostream>
using namespace std;

bool reverse(char name[]  , int size ){
    int s = 0;
    int e = size - 1;
    while(s <= e){
        if (name[s] != name[e]){
            return 0;
        }

        else{
            s++;
            e--;
        }
    }

    return 1;
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++ ){
        count++;
    }

    return count;
}

int main(){

    char name[20] ;
    cout << "Enter the name : ";
    cin >> name; 

    int len = getlength(name);
    cout << "Check it is palindrome or not : " << reverse(name , len);

}