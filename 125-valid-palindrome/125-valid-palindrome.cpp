class Solution {
public:
    bool f(string s,int size){
        
        int i=0;
        int j=size;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
            
        }
        return true;
    }
    bool isPalindrome(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '&&((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>='0'&&s[i]<='9'))){
                if(s[i]>=65&&s[i]<=90){
                    s[i]=tolower(s[i]);
                }
                s[count]=s[i];
                count++;
            }
               
        }
        s[count]='\0';
        for(int i=0;i<count;i++){
            cout<<s[i];
        }
        cout<<count;
        bool ans=f(s,count-1);
        return ans;
        
    }
};