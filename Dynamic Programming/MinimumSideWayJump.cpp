class Solution {
public:
    //Not Working throwing TLE
    int solve(vector<int> &obstacles, int Currlane, int Currpos){
        //Base Case
        int n = obstacles.size() - 1;
        if(Currpos == n){
            return 0;
        }

        if(obstacles[Currpos+1] != Currlane){
            return solve(obstacles, Currlane, Currpos+1);
        }
        else{
            //SideWays Jump
            int ans = INT_MAX;
            for(int i =1; i <= 3 ; i++){
                if(Currlane != i && obstacles[Currpos] != i){
                    ans = min(ans, 1 + solve(obstacles,i,Currpos));
                }
            }
            return ans;
        }
    }

    // Working but have more optimized solution
    int solveMem(vector<int> &obstacles, int Currlane, int Currpos, vector<vector<int>> &dp){
        //Base Case
        int n = obstacles.size() - 1;
        if(Currpos == n){
            return 0;
        }

        if(dp[Currlane][Currpos] != -1){
            return dp[Currlane][Currpos];
        }

        if(obstacles[Currpos+1] != Currlane){
            return solveMem(obstacles, Currlane, Currpos+1,dp);
        }
        else{
            //SideWays Jump
            int ans = INT_MAX;
            for(int i =1; i <= 3 ; i++){
                if(Currlane != i && obstacles[Currpos] != i){
                    ans = min(ans, 1 + solveMem(obstacles,i,Currpos,dp));
                }
            }
            dp[Currlane][Currpos] = ans;
            return dp[Currlane][Currpos];
        }
    }
    int minSideJumps(vector<int>& obstacles) {
        vector<vector<int>> dp(4 , vector<int> (obstacles.size(), -1));
        return solveMem(obstacles, 2,0 , dp);
    }

    
};