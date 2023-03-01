#include <bits/stdc++.h> 
#define MOD 1000000007

int add(int a,  int b){
    return (a%MOD + b%MOD)%MOD;
}

int mult(int a, int b){
    return ((a%MOD)*1LL * (b%MOD))%MOD;
}

int solve(int n , int k, vector<int> &dp){
      //Code Here
    if (n == 1){
        return k;
    }

    if(n == 2){
        return add(k,mult(k,k-1));
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = add(mult(solve(n-2,k,dp) , k-1), mult(solve(n-1,k,dp) , k-1));
    return dp[n];

}
int numberOfWays(int n, int k) {
    vector<int> dp(n+1 , -1);
    return solve(n,k,dp);
}

// Tabulation Method
int solveTab(int n, int k){
    vector<int> dp(n+1 , 0);
    dp[1] = k;
    dp[2] = add(k,mult(k,k-1));
    for(int i = 3 ; i <= n ; i++){
        dp[i] = add(mult(dp[i-2], k-1),mult(dp[i-1] , k-1));
    }
    return dp[n];
}
int numberOfWays(int n, int k) {
    return solveTab(n,k);
}

// More optimized solution
int solveTabOpt(int n, int k){
    
   int prev2 = k;
   int prev1 = add(k,mult(k,k-1));
    for(int i = 3 ; i <= n ; i++){
        int ans = add(mult(prev2, k-1),mult(prev1 , k-1));
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

int numberOfWays(int n, int k) {
    return solveTabOpt(n,k);
}



