class Solution {
public:
    bool f(int i,int j,int k,int m,int n,vector<vector<char>>& board, string word,vector<vector<int>>& vis){
        if( i<0||i>=m||j<0||j>=n||board[i][j]!=word[k]||vis[i][j]==1){
            
            return false;
        }
        if(k==word.size()-1){
            return true;
        }
        vis[i][j]=1;
        bool down=f(i+1,j,k+1,m,n,board,word,vis);
        bool right=f(i,j+1,k+1,m,n,board,word,vis);
        bool left=f(i,j-1,k+1,m,n,board,word,vis);
        bool up=f(i-1,j,k+1,m,n,board,word,vis);
        vis[i][j]=0;
        return down||right||left||up;
        
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        bool back=false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(f(i,j,0,m,n,board,word,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};