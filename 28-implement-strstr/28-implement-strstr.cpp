class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            int j=0;
            int k=i;
            while(k!=haystack.size()&&j!=needle.size()){
                if(haystack[k]==needle[j]){
                    cout<<needle[j]<<endl;
                    k++;
                    j++;
                }
                else{
                    break;

                }
                if(j==needle.size()){
                    return i;
                }
            }
            
        }
        
        return -1;
    }
};