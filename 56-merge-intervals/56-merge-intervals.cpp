class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start=0;
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=ans[start][1]){
                ans[start][0]=min(intervals[i][0],ans[start][0]);
                ans[start][1]=max(intervals[i][1],ans[start][1]);
            }
            else{
                ans.push_back(intervals[i]);
                start++;
                }
        }
        return ans;
        
            
    }
};