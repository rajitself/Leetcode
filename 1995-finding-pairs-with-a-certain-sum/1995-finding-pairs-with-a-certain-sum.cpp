class FindSumPairs {
public:
    vector<int> nums1;
    vector<int> nums2;
    unordered_map<int,int> map;  // freq of nums2

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for (int v : this->nums2)
            map[v]++;
    }
    
    void add(int index, int val) {
        int old = nums2[index];
        if (--map[old] == 0) 
            map.erase(old);

        nums2[index] = old + val;
        map[nums2[index]]++;
    }
    
    int count(int tot) {
        int res = 0;
        for (int x : nums1) {
            int target = tot - x;          // ← corrected
            auto it = map.find(target);
            if (it != map.end())
                res += it->second;
        }
        return res;
    }
};
