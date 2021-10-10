
class Solution {
public:
    bool dfs(vector <vector <char> > &board,string word,int i,int j,int index){
        if(index == word.length()) return true;
        if(i<0 || j<0 || i>=board.size()|| j>= board[0].size()) return false;
        if(board[i][j] != word[index]) return false;
        char  temp = board[i][j];
        board[i][j] = '*';
        if(dfs(board,word,i-1,j,index+1) || dfs(board,word,i+1,j,index+1) || dfs(board,word,i,j+1,index+1)|| dfs(board,word,i,j-1,index+1))
        return true;
        board[i][j] = temp;
        return false;
        
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == word[0]){
                    if (dfs(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
