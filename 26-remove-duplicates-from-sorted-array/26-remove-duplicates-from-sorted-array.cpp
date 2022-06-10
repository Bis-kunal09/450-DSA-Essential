class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        for(int z=1;z<nums.size();z++){
            if(nums[z]!=nums[i]){
                swap(nums[z],nums[j]);
                i++;
                j++;
            }
        }
        return i+1;
        
    }
};