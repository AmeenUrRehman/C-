#include<unordered_map>
#include<list>

bool checkCycleDFS(int node,  unordered_map<int , bool > &visited,
  unordered_map<int , bool > &dfsVisited,  unordered_map<int, list<int>> &adj){
    visited[node] = true;
    dfsVisited[node] = true;

    for(auto neighbour : adj[node]){
      if(!visited[neighbour]){
        bool cycleDetect = checkCycleDFS(neighbour, visited,
        dfsVisited, adj);
        if(cycleDetect){
          return true;
        }
      }
      else if(dfsVisited[neighbour]){
          return true;
      }
    }

    //If not found
    dfsVisited[node] = false;
    return false;
  }

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Creating Adj List
  unordered_map<int, list<int>> adj;
  for(int i = 0 ; i<edges.size() ; i++){
    int u = edges[i].first;
    int v = edges[i].second;

    adj[u].push_back(v);
  }

  //Call dfs for all components
  unordered_map<int , bool > visited;
  unordered_map<int , bool > dfsVisited;
  for(int i = 1 ; i <= n ; i++){
    if(!visited[i]){
      bool CycleFound = checkCycleDFS(i , visited , dfsVisited, adj);
      if(CycleFound){
        return true;
      }
    }
  }
  return false;
}


    /// Thank You !!!