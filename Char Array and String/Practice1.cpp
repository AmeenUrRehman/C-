#include<iostream>
using namespace std;

void reverse(char name[] , int size){
    int s = 0;
    int e = size - 1;

    while(s < e){

        swap(name[s++], name[e--] );

    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }

    return count;
}


int main(){

    char name[20];

    cout << "Enter your name : "<<endl;
    cin >> name ;
    // name[2] = '\0';

   
    int len = getLength(name);

    cout << "The Length of the String is : "<< getLength(name) << endl;

    reverse(name , len);

    cout << " Your name is : " << name << endl;

}