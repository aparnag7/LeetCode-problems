class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pmin = prices[0];
        int n=prices.size();
        if(n==0)
            return 0;
        vector<int> profit(n,0);
        for(int i=1;i<n;i++) {
            profit[i]=max(profit[i-1],prices[i]-pmin);
            pmin = min(pmin,prices[i]);
        }
        int maxprofit=0;
        for(int i=0;i<n;i++)
            maxprofit=max(maxprofit,profit[i]);
        return maxprofit;
    }
};
