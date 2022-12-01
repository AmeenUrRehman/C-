#include<iostream>
using namespace std;

bool SearchNumber(int arr[] , int size  , int key){
    //Base Case
    if(size == 0){
        return false;
    }
    if (arr[0] == key){
        return true;
    }
    else{
        bool checkKey = SearchNumber(arr + 1 , size - 1 , key);
        return checkKey;
    }

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key  = 7;

    bool ans = SearchNumber(arr , size , key);
    if (ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Not Present" << endl;
    }


}