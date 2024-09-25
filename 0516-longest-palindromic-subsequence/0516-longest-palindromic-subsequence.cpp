class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp(s.size(),vector<int>(s.size(),-1));
        return lps(0,s.length()-1,s,dp);
    }

    int lps(int i,int j,string &s,vector<vector<int>> &dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int t=-1e9,tt=-1e9;
        if(s[i]==s[j]){
            if(i!=j)
            t=2+lps(i+1,j-1,s,dp);
            else
            t=1+lps(i+1,j-1,s,dp);
            
        }else{
            tt=max(lps(i+1,j,s,dp),lps(i,j-1,s,dp));
            
        }
        return dp[i][j]=max(t,tt);
    }
};