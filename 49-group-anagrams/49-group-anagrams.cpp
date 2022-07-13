class Solution {
public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> s;
//         vector<int> vis(strs.size(),0);
    
//         for(int i=0;i<strs.size();i++){
            
//             if(vis[i]==1){
//                 continue;
//             }
            
           
//             vector<string> ans;
            
//             ans.push_back(strs[i]);
//             vis[i]=1;
            
//             for(int j=1;j<strs.size();j++){
//                  int count=0;
//                 unordered_map<char,int> mp;
//                 if(strs[i].size()==0&&strs[j].size()!=0){
//                     continue;
//                 }
//                 for(auto x:strs[i]){
//                     mp[x]++;
                   
//                 }
//                 if(vis[j]==0){
                    
//                     for(auto x:strs[j]){
//                         if(mp.find(x)!=mp.end()){
//                             mp[x]--;
                           
//                             if(mp[x]==0){
//                                 mp.erase(x);
//                             }
//                         }
//                         else{
//                             break;
//                         }
//                     }
//                     if(mp.size()==0&&strs[i].size()==strs[j].size()){
//                         ans.push_back(strs[j]);
//                         vis[j]=1;
//                     }
                    
//                 }
//                 else{
//                     continue;
//                 }
//             }
//             s.push_back(ans);
//         }
//         return s;
        
//     }
     vector<vector<string>> groupAnagrams(vector<string>& strs) {
         
         vector<vector<string>> s;
         unordered_map<string,vector<string>> mp;
         for(auto x:strs){
             string t=x;
             sort(t.begin(),t.end());
             mp[t].push_back(x);
             
             
         }
         for(auto x:mp){
             s.push_back(x.second);
         }
         return s;
     }
    
};