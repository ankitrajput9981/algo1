
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    int countVowels(string str){
        int arr[5] = {0};
        int count = 0;
        for(int i = 0; i<str.length(); i++){
            
            if(str[i] == 'a'){
                arr[0]++;
            }
            else if(str[i] == 'e'){
                arr[1]++;
            }
            else if(str[i] == 'i'){
                arr[2]++;
            }
            else if(str[i] == 'o'){
                arr[3]++;
            }
            else if(str[i] == 'u'){
                arr[4]++;
            }
        }
        for(int i = 0; i<5; i++){
            if(arr[i] >= 1){
                count++;
            }
        }
        return count;
        
        
       //Your code here
        
    }
};

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{

	string s;
	cin >> s;
	Solution obj;
	cout << obj.countVowels(s) << endl;
	
	}
	return 0;
	
}
