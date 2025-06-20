class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
        int n = nums.size();
        vector<long long> pre(n,0);
        int x = INT_MIN;
        for(int i = 0; i < n; i++){
            pre[i] = max(nums[i],x);
            x = max(nums[i],x);
        }
        vector<long long> suff(n,0);
        x = INT_MIN;
        
        for(int i = n-1; i >= 0; i--){
            suff[i] = max(nums[i],x);
            x = max(nums[i],x);
        }
        vector<long long> npre(n,0);
        x = INT_MAX;
        for(int i = 0; i < n; i++){
            npre[i] = min(nums[i],x);
            x = min(nums[i],x);
        }
        vector<long long> nsuff(n,0);
        x = INT_MAX;
        
        for(int i = n-1; i >= 0; i--){
            nsuff[i] = min(nums[i],x);
            x = min(nums[i],x);
        }
        int i = 0; 
        int j = i + m - 1;
        long long res = LLONG_MIN;
        while(j < n){
            res = max(res,max(pre[i]*suff[j],npre[i]*nsuff[j]));
            i++;
            j++;
        }
        return res;
    }
};