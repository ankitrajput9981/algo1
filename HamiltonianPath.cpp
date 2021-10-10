#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    int left;
    vector<vector<int>> adj;
    vector<bool> visited;
    bool dfs(int cur) {
        visited[cur] = true;
        left--;
        if(left == 0) return true;
        for(int a: adj[cur]) {
            if(!visited[a] && dfs(a))
                return true;
        }
        visited[cur] = false;
        left++;
        return false;
    }
    public:
    bool check(int N,int M,vector<vector<int>> Edges) {
        left = N;
        if(M < N-1) return false;
        adj = vector<vector<int>>(N+1);
        for(auto edge: Edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        visited.assign(N+1, false);
        for(int i=1; i<=N; i++) {
            if(dfs(i))
                return true;
        }
        return false;
    }
};
// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}  // } Driver Code Ends
