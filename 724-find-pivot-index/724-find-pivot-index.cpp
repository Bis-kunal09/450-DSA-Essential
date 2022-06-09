class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(auto x:nums){
            total+=x;
        }
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            total-=nums[i];
            if(lsum==total){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
        
    }
};