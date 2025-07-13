class Solution {
public:
    void helper(string& s, unordered_map<string,int>& ori,int p,vector<int>& res,int m,int k){
        int n = s.size();
        unordered_map<string,int> map;
        int j = 0 + p;
        for(int i = 0; i < m-1; i++){
            map[s.substr(j,k)]++;
            j = j + k;
        }
        j = 0 + p;
        for(int i = (m-1)*k + p; i < n; i = i + k){
            map[s.substr(i,k)]++;
            if(check(map,ori)){
                res.push_back(j);
            }
            map[s.substr(j,k)]--;
            if(map[s.substr(j,k)] <= 0)
            map.erase(s.substr(j,k));
            j = j + k;
        }
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        int n = s.size();
        int m = words.size();
        int k = words[0].size();
        if( n < k) return res;
        unordered_map<string,int> ori;
        for(auto i : words) ori[i]++;

        for(int i = 0; i < k; i++){
            helper(s,ori,i,res,m,k);
        }
        
        return res;
    }
    bool check(unordered_map<string,int>& map, unordered_map<string,int>& ori){
        for(auto& i : ori){
            string s = i.first;
            if(map.find(s) == map.end() || map[s] != ori[s]) return false;
        }
        return true;
    }
};