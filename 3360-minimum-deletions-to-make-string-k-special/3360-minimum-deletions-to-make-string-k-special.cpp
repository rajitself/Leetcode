static auto init = []() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();
class Solution {
public:
    int minimumDeletions(string word, int k) {
        int n = word.size();
        vector<int> fre(26,0);
        for(int i = 0; i < n;i++){
            fre[word[i] - 'a']++;
        }
        sort(fre.begin(),fre.end());
        int res = 1e9;
        int sum = 0;
        for(int i = 0; i < 26; i++){
            int del = sum;
            for(int j = 25; j > i; j--){
                if(fre[j] - fre[i] > k)
                    del += fre[j] - fre[i] - k;
                else break;
            }
            res = min(res, del);
            sum += fre[i];
        }

        return res;
    }
};