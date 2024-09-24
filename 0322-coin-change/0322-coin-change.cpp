class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount<1) return 0;
        int n=sizeof(coins)/sizeof(int);
        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            dp[i]=INT_MAX;
            for(int coin:coins){
                if(coin<=i && dp[i-coin]!=INT_MAX){
                    dp[i]=min(dp[i],dp[i-coin]+1);
                }
            }
        }
        if(dp[amount]==INT_MAX)
        return -1;
        return dp[amount];
    }
};