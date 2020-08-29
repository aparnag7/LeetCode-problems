class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        dp[0]=1; //there are no stairs so u don't take a step that's one way
        dp[1]=1; //there is only one stair so we climb it in 1 way
        for(int i=2;i<=n;i++)
            dp[i] = dp[i-2]+dp[i-1];
        return dp[n];
    }
};
