class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int to_swap=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[to_swap]){
                to_swap++;
                swap(arr[to_swap],arr[i]);
            }
        }
        return to_swap+1;
    }
};