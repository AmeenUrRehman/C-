#include<iostream>
using namespaces std;

class solutions{

    private:
    vector<int> nextSmallerElement(int *arr, int n){
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for(int i = n-1; i>= 0 ; i--){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
                
            }

            //Ans is Stack ka top
            ans[i] = s.top();
            s.push(i);
            }

            return ans;
    }
    vector<int> prevSmallerElement(int *arr , int n){
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for(int i = 0; i < n ; i++){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
                
            }

            //Ans is Stack ka top
            ans[i] = s.top();
            s.push(i);
            }

            return ans;
    }

    public:

    int largestRectangleArea(int *arr, int n){

        vector<int> next(n);
        next = nextSmallerElement(height, n);

        vector<int> prev(n);
        prev = prevSmallerElement(height, n);

        int area = INT_MIN;
        for(int i = 0 ; i< n; i++){
            int l = height[i];
          
            if(next[i] == -1){
                next[i] = n;
            }

            int b = next[i] - prev[i] + 1;
            int newArea = l*b;

            area = max(area, newArea);
        }

        return area;
    }
    int maxArea(int M[MAX][MAX], int n, int m){
        //Compute are for first row
        int area = largestRectangleArea(M[0], m);

        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){

                //Row update by adding previous values
                if(M[i][j] != 0){
                    M[i][j] = M[i][j] + M[i - 1][j];
                }
                else{
                    M[i][j] = 0;
                }

                area = max(area, largestRectangleArea(M[i] , m))
            }
        }

    }
}

int main(){

}