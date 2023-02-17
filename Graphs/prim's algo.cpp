#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Create adj list
    unordered_map<int,list<pair<int,int>>> adjlist;
    for(int i = 0 ; i < g.size() ; i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        adjlist[u].push_back(make_pair(v,w));
        adjlist[v].push_back(make_pair(u,w));
    }

    vector<int> key(n+1);
    vector<bool> mst(n+1);
    vector<int> parent(n+1);

    //Initializing
    for(int i = 0 ; i <= n ; i++){
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }

    //Algorithm from here
    key[1] = 0;
    parent[1] = -1;
    for(int i = 1; i < n ; i++){
        int mini = INT_MAX;
        int u;
        //Find mini
        for(int v = 1 ; v <= n ; v++){
            if(mst[v] == false && key[v] < mini){
                u = v;
                mini = key[v];
            }
        }

        //Mark min node as time
        mst[u] = true;

        // Check its adjacent nodes
        for(auto it: adjlist[u]){
            int v = it.first;
            int w = it.second;

            if (mst[v] == false && w < key[v]) {
              parent[v] = u;
              key[v] = w;
            }
        }
    }
        vector<pair<pair<int,int> , int>> result;
        for(int i = 2; i <= n ; i++){
            result.push_back({{parent[i] , i} , key[i]});

        }
        
    return result;

}
