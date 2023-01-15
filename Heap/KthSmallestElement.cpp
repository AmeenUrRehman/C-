 //Step - 1 
        priority_queue<int> pq;
        for(int i = 0; i < k ; i++){
            pq.push(arr[i]);
        }
        
        //Step - 2
        for(int i = k ; i <= r ; i++){
            if(arr[i] < pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        //Step - 3
        int ans = pq.top();
        return ans;