class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size()==0||nums.size()==1||nums.size()==2){
            return ans;
        }
        
        for(int i=0;i<nums.size();i++){
            if ((i>0) && (nums[i]==nums[i-1])){
                 continue;
            }
               
            int j=i+1;
            int k=nums.size()-1;
            cout<<i<<j<<k<<endl;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> fans;
                    fans.push_back(nums[i]);
                    fans.push_back(nums[j]);
                    fans.push_back(nums[k]);
                    ans.push_back(fans);
                    cout<<"enter"<<i<<j<<k<<endl;
                    while (j<k&&nums[j]==nums[j+1]) j++;
                    while (j<k&&nums[k]==nums[k-1]) k--;
                    j++; k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else{
                    j++;
                }
                
            }
        }
        return ans;
    }
};