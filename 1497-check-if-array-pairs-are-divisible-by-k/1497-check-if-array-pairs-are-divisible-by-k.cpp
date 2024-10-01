class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> rem(k, 0);
        int n=arr.size();
        for(int i=0;i<n;i++){
            int p=arr[i]%k;
            if(p < 0){
                p = p + k;
            }
            rem[p]++;
        }
        for(int i = 1;i <= k / 2;i++){
            if(rem[i] != rem[k-i]) {
                return false;
            }
        }
         if (rem[0] % 2 != 0) {
            return false;
        }
        return true;
    }
};