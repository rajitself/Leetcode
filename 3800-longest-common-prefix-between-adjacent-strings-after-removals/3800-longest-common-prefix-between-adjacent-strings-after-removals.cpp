class Solution {
public:
    vector<int> longestCommonPrefix(vector<string>& words) {
        int n = words.size();
        vector<int> pre(n,0);
        vector<int> suff(n,0);

        // pre
        int maxi = 0;
        for(int i = 1; i < n; i++){
            maxi = max(maxi,common(words[i],words[i-1]));
            pre[i] = maxi;
        }
        maxi = 0;
        for(int i = n-2; i >= 0; i--){
            maxi = max(maxi,common(words[i],words[i+1]));
            suff[i] = maxi;
        }
        vector<int> res(n,0);
        if(n > 1){
        res[0] = suff[1];
        res[n-1] = pre[n-2];
        }
        for(int i = 1; i < n-1; i++){
            int ans = suff[i+1];
            ans  = max(ans,pre[i-1]);
            ans = max(ans,common(words[i-1],words[i+1]));
            res[i] = ans;
        }
        return res;
    }
    int common(string a,string b){
        int len = min(a.size(),b.size());
        int i = 0;
        while(i < len && a[i] == b[i]) i++;
         return i;
    }
};