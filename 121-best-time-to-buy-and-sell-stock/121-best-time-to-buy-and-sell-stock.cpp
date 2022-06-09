class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> a(n);
        vector<int> b(n);
        a[0]=prices[0];
        b[n-1]=prices[n-1];
        
        for(int i=1;i<n;i++){
            if(prices[i]<a[i-1]){
                a[i]=prices[i];
            }
            else{
                a[i]=a[i-1];
            }
        }
        for(int i=n-2;i>=0;i--){
            if(prices[i]>b[i+1]){
                b[i]=prices[i];
            }
            else{
                b[i]=b[i+1];
            }
        }
       
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int L=b[i]-a[i];
            maxi=max(L,maxi);
        }
        return maxi;
    }
};