class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r=board.size();
        int c=board[0].size();
        vector<vector<int>> sboard(r,vector<int>(c,-1));
        queue<pair<int,int>> q;
        q.push({0,0});
        int dr[8]={0,0,1,-1,-1,1,-1,1};
        int dc[8]={1,-1,0,0,1,1,-1,-1};
        while(!q.empty()){
           
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(sboard[i][j]!=-1){
                continue;
            }
            
            
            int count=0;
            for(int k=0;k<8;k++){
                int di=i+dr[k];
                int dj=j+dc[k];
                if(di<0||di>=r||dj<0||dj>=c){
                    continue;
                }
                
                if(board[di][dj]==1){
                    count++;
                }
                
                q.push({di,dj});
                
                
            }
             
            if(board[i][j]==1){
                    if(count<2||count>3){
                        sboard[i][j]=0;
                    }
                    else{
                        sboard[i][j]=1;
                    }
                    
                    
                }
            else if(board[i][j]==0){
                    if(count==3){
                        sboard[i][j]=1;
                    }
                    else{
                        sboard[i][j]=0;
                    }
                }
            
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                board[i][j]=sboard[i][j];
            }
        }
        
    }
};