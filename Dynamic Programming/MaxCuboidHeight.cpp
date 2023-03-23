class Solution {
public:

    bool check(vector<int> base, vector<int> newBox){
        if(newBox[0] <= base[0] && newBox[1] <= base[1] && newBox[2] <= base[2])
            return true;
        else
            return false;
    }

    int solveTab(int cubSize, vector<vector<int>> &cub){
        vector<int> CurrRow(cubSize+1, 0);
        vector<int> nextRow(cubSize+1, 0);

        for(int curr  = cubSize - 1; curr >= 0; curr--){
            for(int prev = curr - 1; prev >= -1; prev--){

                //Include
                int take = 0;
                if(prev == -1 || check(cub[curr], cub[prev])){
                    take = cub[curr][2] + nextRow[curr+1];
                }

                //Exclude
                int notTake = 0 + nextRow[prev + 1];
                CurrRow[prev + 1] = max(take, notTake);
            }
            nextRow = CurrRow;
        }
        return nextRow[0];
    }

    int maxHeight(vector<vector<int>>& cuboids) {

        //Step 1 = Sort All dimensions for every cuboid
        for(auto &a: cuboids){
            sort(a.begin() , a.end());
        }

        //Step 2 = Sort all cuboids basis on w or l
        sort(cuboids.begin() , cuboids.end());

        //Step 3 = Use LIS Logic
        return solveTab(cuboids.size() , cuboids);
    }
};