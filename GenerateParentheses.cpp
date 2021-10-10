
#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void generateValid(vector<string>&out, int open, int close, int n,string s){
        //base
        if(open == n && close == n){
            out.push_back(s);
            return;
        }
        if(open<n){
            generateValid(out, open+1, close,n,s+"(");
        }
        if(close<open){
            generateValid(out, open, close+1,n, s+")");
        }
    }
    vector<string> AllParenthesis(int n) {
        vector<string> out;
        
        generateValid(out, 0, 0,n, "");
        return out;
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends
