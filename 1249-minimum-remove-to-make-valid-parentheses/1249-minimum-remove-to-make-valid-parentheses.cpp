class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            // if((s[i]==')'&&st.top().first=='(')||(s[i]=='('&&st.top().first==')')){
            //     cout<<"H";
            //     st.pop();
            // }
            if(s[i]=='('){
                st.push(i);
                
            }
            else if(s[i]==')'){
                if(st.empty()==false){
                    st.pop();
                }
                else{
                    s[i]='#';
                }
            }
            
            
        }
        while(st.empty()==false){
                s[st.top()]='#';
                st.pop();
            }
            string ans;
            for(int i=0;i<s.size();i++){
                if(s[i]!='#'){
                    ans.push_back(s[i]);
                }
            }
        
        return ans;
    }
};