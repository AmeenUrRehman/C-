#include<iostream>
using namespace std;

string replacespaces(string &s){
    string temp = "";
    for(int i = 0 ; i < s.length() ; i++){
        if (s[i] == ' '){
            temp.push_back('@');
            temp.push_back('1');
            temp.push_back('2');
        }
        else {
           temp.push_back(s[i]);
        }
    }
    return temp;
}

int main(){
    string str;
    cout << "Enter the string : " ;
    cin >> str ;
    string strk = replacespaces(str);
    cout << "Replace spaces looklike this : " << strk << endl;


}