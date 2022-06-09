class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[l],nums[m]);
                m++;
                l++;
            }
            else{
                l++;
            }
        }
        
    }
};