#include<unordered_map>
#include<queue>
#include<list>
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	//Create adjacency list
	unordered_map<int , list<int>> adj;
	for(int i =0 ; i < edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;

		adj[u].push_back(v);
		adj[v].push_back(u);

	}

	//Do BFS
	unordered_map<int , bool> visited;
	unordered_map<int,int> parent;
	queue<int> q;
	q.push(s);
	parent[s] = -1;
	visited[s] = true;

	while(!q.empty()){
		int front = q.front();
		q.pop();
		for(auto i : adj[front]){
			if(!visited[i]){
				visited[i] = true;
				parent[i] = front;
				q.push(i);
			}
		}
	}

	//Prepare shortest path
	vector<int> ans;
	int CurrentNode = t;
	ans.push_back(t);
	while(CurrentNode != s){
		CurrentNode = parent[CurrentNode];
		ans.push_back(CurrentNode);
	}

	reverse(ans.begin() , ans.end());
	return ans;

	
}