#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums , vector<int>& ans , int index){
    //Base Case
    if(index >= nums.size()){
        ans.push_back(nums);
        return ;
    }

    for(int j = index ; j < nums.size() ; j++){
        swap(nums[index] , nums[j]);
        solve(nums , ans , index+1);
        swap(nums[index] , nums[j]);
    }
}

int main(){
    vector<vector<int>> ans;
    int index = 0;
    vector<int> nums = {123};
    solve(nums , ans , index);
    return ans;
}