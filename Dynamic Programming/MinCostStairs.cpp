class Solution {
public:

    int solve(vector<int> &cost , int n , vector<int> &dp){
        //Base Case
        if(n == 0){
            return cost[0];
        }
        if(n == 1){
            return cost[1];
        }

        //Step 3
        if(dp[n] != -1){
            return dp[n];
        }

        //Step 2
        dp[n] = cost[n] + min(solve(cost,n-1,dp) , solve(cost , n-2,dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {

        //Step 1
        int n = cost.size();
        vector<int> dp(n+1, -1);
        int ans = min(solve(cost,n-1,dp) , solve(cost,n-2,dp));
        return ans;
    }
};

// Tabluation method

class Solution {
public:

    int solve(vector<int> &cost , int n){
       // Step 1 create a dp array
       vector<int> dp(n+1);

       //Step 2 Base Case
       dp[0] = cost[0];
       dp[1] = cost[1];

       //Step 3
        for(int i = 2 ; i <n ; i++){
           dp[i] = cost[i] + min(dp[i-1] , dp[i-2]);
        }
        return min(dp[n-1] , dp[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        return solve(cost,n);
    }
};

// More Optimized Solution
class Solution {
public:

    int solve(vector<int> &cost , int n){
       // Step 1 create a dp array
       int prev2 = cost[0];
       int prev1 = cost[1];

       //Step 3
        for(int i = 2 ; i <n ; i++){
          int curr = cost[i] + min(prev1 , prev2);
          prev2 = prev1;
          prev1 = curr;
        }
        return min(prev2,prev1);
    }
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        return solve(cost,n);
    }
};
//T.C OF THIS O(n)
// S.C OF THIS O(1)