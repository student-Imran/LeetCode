#include<bits/stdc++.h>
using namespace std; 
class Solution {
    public : 
    int bfs(vector<bool> &visited,
        vector<vector<pair<int,int>>>&adj,int n){
         
        queue<int>q;
        q.push(1);
        visited[1]=true;
        int minimumScore = INT_MAX;
        while(!q.empty()){
            int qnode = q.front();
            q.pop();
           
            for(auto [v,cost] : adj[qnode]){
                  minimumScore = min(minimumScore, cost);
                if(!visited[v]){
                    q.push(v);
                    visited[v]=true;
                }
            }
        }
       return minimumScore;
    }
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto road : roads){
            int u = road[0];
            int v = road[1];
            int cost = road[2];
            adj[u].push_back({v,cost});
            adj[v].push_back({u,cost});

        }
        
        vector<bool> visited(n+1, false);
        int ans = bfs(visited,adj,n);
        return ans;
    }
};
void solve() {
    Solution sol;
    vector<vector<int>>roads;
    roads = {{1,2,9},{2,3,6},{2,4,5},{1,4,7}};
    int n = 4;
    sol.minScore(n,roads);
}

int main() {
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
