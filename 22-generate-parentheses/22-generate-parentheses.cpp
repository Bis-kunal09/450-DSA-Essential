class Solution {
public:
    
    void f(int open,int close,string op,vector<string> &s){
        if(open==0&&close==0){
            s.push_back(op);
            return;
        }
        if(open!=0){
            string op1=op;
            op1.push_back('(');
            
            f(open-1,close,op1,s);
            
        }
        if(close>open){
            string op1=op;
            op1.push_back(')');
            
            f(open,close-1,op1,s);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=n;
        
        int close=n;
        
        f(open,close,"",ans);
        return ans;
    }
};