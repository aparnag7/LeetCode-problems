class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0 || n==1)
                return 0;
        vector<int> profit1(n,0);
        vector<int> profit2(n,0);
        int p1= prices[0];
        int p2=prices[n-1];
        for(int i=1;i<n;i++){
            profit1[i] = max(profit1[i-1] , prices[i]-p1);
            p1 =min(p1,prices[i]);
        }
        for(int i=n-2;i>=0;i--) {
            profit2[i]=max(profit2[i+1] , p2-prices[i]);
            p2 =max(p2,prices[i]);
        }
        int profit =0;
        for(int i=0;i<n;i++) 
            profit = max(profit , profit1[i]+profit2[i]);
        return profit;
    }
};
