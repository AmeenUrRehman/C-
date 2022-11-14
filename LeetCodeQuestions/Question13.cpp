#include<iostream>
using namespace std;

int BinarySearchSquare(int number){
    int start = 0;
    int end = number;
    int mid = start + (end- start)/2;
    int ans  = -1;

    while(start <= end){
        int square = mid * mid ;

        if(square == mid){
            return mid;
        }

        else if(square > number){
            end = mid - 1;
        }

        else{
            ans = mid ;
            start = mid + 1;
        }

        mid = start + (end - start)/2 ;
    }
    return ans;
}



int main(){

    int answer = BinarySearchSquare(36);
    cout<< "Enter the square root of 36 is : " << answer << endl;

}