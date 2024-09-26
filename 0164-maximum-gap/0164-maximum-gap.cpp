class Solution {
public:
    int maximumGap(vector<int>& nums) {
        //this is not the appropriate solution...
        sort(nums.begin(),nums.end());
        int maxi = 0;
        if(nums.size()<2){
        return maxi;
        }
        for(int i=1;i<nums.size();i++){
        maxi = max(maxi,nums[i]-nums[i-1]);
        }
        return maxi;
    }
};