#include<iostream>
using namespace std;

bool IsPalindrome(string str , int i , int j){

    //BaseCase
    if(i > j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return IsPalindrome(str , i+1 , j-1);
    }
}

int main(){
    
    string name = "abbaccbba";
    cout << endl;

    bool checkPalindrome = IsPalindrome(name , 0 , name.length()-1);
    if(checkPalindrome){
        cout << "It is Palindrome.";
    }

    else{
        cout << "It is not Palindrome.";
    }

    return 0;
}