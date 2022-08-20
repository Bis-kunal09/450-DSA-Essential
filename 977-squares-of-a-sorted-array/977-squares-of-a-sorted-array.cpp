class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x*x]++;
        }
        vector<int> ans;
        for(auto x:mp){
            while(x.second!=0){
                ans.push_back(x.first);
                x.second--;
            }
           
        }
        return ans;
    }
};