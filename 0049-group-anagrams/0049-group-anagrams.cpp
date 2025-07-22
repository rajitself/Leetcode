class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> map;

        for(auto s : strs){
            string val = s;
            sort(val.begin(),val.end());
            map[val].push_back(s);
        }
        for(auto i : map){
            res.push_back(i.second);
        }
        return res;
    }
};