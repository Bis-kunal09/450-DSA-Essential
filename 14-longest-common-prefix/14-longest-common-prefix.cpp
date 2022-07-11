class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        string s=strs[0];
        int idx=INT_MAX;
        for(int i=1;i<strs.size();i++){
            int count=0;
            for(int j=0;j<min(strs[i].size(),s.size());j++){
                cout<<strs[i][j]<<" "<<s[j]<<endl;
                if(s[j]==strs[i][j]){
                    count++;
                }
                else{
                    break;
                }
                
            }
            idx=min(idx,count);
        }
        string ans;
        cout<<idx;
        if(idx==INT_MAX){
            return "";
        }
        for(int i=0;i<idx;i++){
            ans+=strs[0][i];
        }
        return ans;
        
            
        
        
    }
};