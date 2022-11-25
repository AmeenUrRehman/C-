#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    int arr[4][5] = {{1,11,111,1111,11111},{1,2,111,1111,11111},{1,3,111,1111,11111},{1,4,111,1111,11111}};
    for(int col = 0 ; col < 5 ; col++){
        if(col&1){
            for(int row = 4; row >= 0 ; row-- ){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row = 0; row < 4 ; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }   
    // return ans;
}