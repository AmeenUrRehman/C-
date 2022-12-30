#include <bits/stdc++.h> 
class NStack
{
    int *arr;
    int *top;
    int *next;
    
    int n ;// No of Stacks
    int s; //Size
    int freespot;
    
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {    
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        //Initialise top
        for(int i = 0 ; i < n ; i++){
            top[i] = -1;
        }
        
        for(int i = 0 ; i <s ; i++){
            next[i] = i + 1;
        }
        //Update Last Index to -1
        next[s - 1] = -1;
        
        //Intialise freespot
        freespot = 0;
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
      // Check Overflow
        if(freespot == -1){
            return false;
        }
        
        //Find Index
        int index = freespot;
        
        // Update freeSpot
        freespot = next[index];
        
        //Insert Element
        arr[index] = x;
        
        // Update next
        next[index] = top[m - 1];
        
        //Update top
        top[m - 1] = index;
        
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //Check Underflow
        if(top[m-1] == -1){
            return -1;
        }
        //Just reverse the flow of push; 
        int index = top[m -1];
        top[m -1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};

//Time Complexity = BigO(1)
//Space Complexity = BigO(s + n)