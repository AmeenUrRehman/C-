#include<iostream>
using namespace std;

int isPossible(int arr[] , int k , int mid,int size){

    int cowCount = 1;
    int lastPos = arr[0];
    
    for(int i=0; i<size; i++ ){
        
        if(arr[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;

}

int main(){
    int arr[5] = {4,2,1,3,6};
    int size = 5;
    int maxi = -1;
    int start = 0;
    for(int i = 0 ; i <= size ; i++){
        maxi = max(maxi,arr[i]);
    }
    int k =2;
    int end = maxi;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible(arr, k , mid,size)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}