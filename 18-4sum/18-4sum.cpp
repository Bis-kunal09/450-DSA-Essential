class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        if(n<4){
            return ans;
        }
        long long t=(long long) target;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
        
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                
                if((j>i+1&&nums[j]==nums[j-1])){
                    continue;
                }
                
                int k=j+1;
                int l=n-1;
                while(k<l){
                    
                    long long sum=nums[i]+nums[j];
                    long long check=t-(nums[k]+nums[l]);
                    if(sum==check){
                        
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        v.push_back(nums[l]);
                        ans.push_back(v);
                        do{
                          k++;  
                        }while(nums[k]==nums[k-1]&&k<l);
                        do{
                          l--;  
                        }while(nums[l]==nums[l+1]&&k<l);
                        
                    }
                    else if(sum<check){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return ans;
        
    }
};