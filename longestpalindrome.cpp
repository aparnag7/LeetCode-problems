class Solution {
public:
    int longestPalindrome(string s) {
        int n= s.length();
        unordered_map<char,int> m;
        for(char c: s)
        {
            m[c]++;
        }
        int res=0;
        bool odd_count=false;
        for(auto &c: m) {
            if(c.second%2==0) 
                res+=c.second;
            else {
                odd_count = true;
                res += c.second-1;
            }
        }
        if(odd_count)
                return ++res;
        return res;
    }
};
