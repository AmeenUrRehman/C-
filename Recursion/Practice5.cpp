#include<iostream>
using namespace std;

void sayDigit(int n , string arr[]){
    //base case
    if(n==0){
        return ;
    }

    // Preprocessing
    int digit = n % 10;
    n = n /10;

    //R.R
    sayDigit(n , arr);

    cout << arr[digit] << " " ;


}

int main(){
   string arr[10] = { "Zero" , "One" , "Two" , "Three" , "Four" , "Five" ,"Six" , "Seven" , "Eight" , "Nine"};
   int n ; 
   cout << "Enter the number into say digit : ";
   cin >> n;

   sayDigit(n,arr);

   return 0;
}