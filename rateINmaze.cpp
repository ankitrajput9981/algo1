
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    bool isValid(vector<vector<int>> &visited, vector<vector<int>> &m, int i , int j , int n)
    {
        if(i < 0 || j < 0 || i >= n || j >= n || m[i][j] == 0 || visited[i][j] == 1)
        {
            return false;
        }
        
        return true;
    }
    
    
    void solve(int i, int j, vector<vector<int>> &visited, vector<string> &result, string &path, vector<vector<int>> &m , int n)
    {
        
        if(!isValid(visited,m,i,j,n))
        {
            return;
        }
        
        if(i == n - 1 && j == n - 1)
        {
            result.push_back(path);
            return;
        }
        
        

        visited[i][j] = 1;
        
        if(isValid(visited,m,i+1,j,n))
        {
            path.push_back('D');
            solve(i+1,j,visited,result,path,m,n);
            path.pop_back();
        }
        
        if(isValid(visited,m,i,j-1,n))
        {
            path.push_back('L');
            solve(i,j-1,visited,result,path,m,n);
            path.pop_back();
        }
        
        
        
        if(isValid(visited,m,i,j+1,n))
        {
            path.push_back('R');
            solve(i,j+1,visited,result,path,m,n);
            path.pop_back();
        }
        
        if(isValid(visited,m,i-1,j,n))
        {
            path.push_back('U');
            solve(i-1,j,visited,result,path,m,n);
            path.pop_back();
        }
        
        visited[i][j] = 0;
        
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        
        vector<string>result;
        
        string path;
        
        vector<vector<int>>visited(n,vector<int>(n,0));
        
        solve(0,0,visited,result,path,m,n);
        
        return result;
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
