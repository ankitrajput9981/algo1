
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int arr[26]={0};
        for(auto i:patt)
            arr[i-'a']++;
        for(int i=0;i<str.size();i++)
            if(arr[str[i]-'a'])
                return i;
        return -1;
        /*unordered_map<char,int> hash;
        for(int i = 0 ; i < str.size(); ++i){
            if(hash[str[i]] == 0)
                hash[str[i]] = i + 1;
        }
        int minIndex = INT_MAX;
        for(int i = 0 ; i < patt.size(); i++){
            if(hash[patt[i]] < minIndex)
                minIndex = hash[patt[i]];
        }
        return (minIndex == INT_MAX) ? -1 : minIndex - 1;*/
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends
