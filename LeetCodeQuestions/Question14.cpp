#include<iostream>
using namespace std;
// Book Allocation Problem

bool isPossible(int arr[] , int size , int m , int mid){
    int StudentCount = 0;
    int pageSum = 0;

    for(int i = 0; i <=size; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }

        else {
            StudentCount++;
            if(StudentCount >m || arr[i]>mid){
                return false;
            }

            pageSum = arr[i];
        }

        return true;


    }
}

int main(){
    int start = 0 ;
    int sum = 0 ;
    int arr[4] = {10,20,30,40};
    int m = 2;
    int size = 4;
    for (int  i = 0 ; i < 4 ; i++ ){
        sum += arr[i];
        cout << sum << endl;
    }

    int end = sum;
    cout<<end<<endl;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(isPossible(arr , size , m , mid)){
            ans = mid;
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }

    return ans;

}