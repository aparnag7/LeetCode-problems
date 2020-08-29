class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        int lmax =nums[0] , gmax=nums[0];
        for(int i=1;i<n;i++) {
            lmax += nums[i];
            lmax = max(nums[i] , lmax);
            gmax = max(lmax , gmax);
        }
        return gmax;
    }
};
