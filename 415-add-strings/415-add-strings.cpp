class Solution {
public:
    
    string addStrings(string num1, string num2) {
        int carry=0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        string s;
        int k=i+j+1;
        while(i>=0&&j>=0){
            int a=(num1[i]-'0')+(num2[j]-'0');
            char c=((a+carry)%10+'0');
            carry=(a+carry)/10;
            s+=c;
            i--;
            j--;
            k--;
        }
        while(i>=0){
            int a=(num1[i]-'0');
            char c=((a+carry)%10+'0');
            carry=(a+carry)/10;
            s+=c;
            k--;
            i--;
            
        }
        while(j>=0){
            int a=(num2[j]-'0');
            char c=((a+carry)%10+'0');
            carry=(a+carry)/10;
            s+=c;
            k--;
            j--;
            
        }
        
        if(carry==1){
           s+=to_string(carry); 
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};