#include<iostream>
#include<stack>
using namespace std;

class Solution{

    private:
    bool knows(vector<vector<int>> &M, int a, int b,  int n){
        if(M[a][b] == 1){
            return true;
        }
        return false;
    }

    public:
    //Function to find if there is a celebrity in party
    int celebrity(vector<vector<int>> &M, int n){
        stack<int> s;
        //Step 1 push all elements in a stack
        for(int i = 0 ; i < n ; i++){
            s.push(i);
        }     

        //Step 2 get two elements and compare
        while(s.size() > 1){
            int a  = s.top();
            s.pop();
            int b = s.top();
            s.pop();
        }   

        if(knows(M,a,b, n)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }

    int candidate = s.top();

    // STEP 3 Single Element is a potential celebrity candidate
    // So verify it;

    bool rowCheck = false;
    int ZeroCount= 0 ;
    for(int i  = 0; i<n ; i++){
        if(M[candidate][i] == 0){
            ZeroCount++;
        }
    }
    // All Zeros
    if(ZeroCount == n){
        rowCheck = true;
    }

    //Col Check
    bool ColCheck = false;

    int OneCount = 0;
    for(int i  = 0; i<n ; i++){
        if(M[i][candidate] == 1){
            OneCount++;
        }
    }
    if(OneCount == n - 1){
        ColCheck = true;
    }

    if(rowCheck == true && ColCheck == true){
        return candidate;
    }
    else{
        return -1;
    }

}
