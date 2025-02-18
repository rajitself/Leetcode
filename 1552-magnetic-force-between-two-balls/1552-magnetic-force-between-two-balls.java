class Solution {
    public int maxDistance(int[] arr, int m) {
        int n=arr.length;
        Arrays.sort(arr);
        int ans=-1;
        int left=1,right=arr[n-1]-arr[0];
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isPossible(arr,mid,m)){// left jao
                ans=mid;
                left=mid+1;
            }else{// right jao
                right=mid-1;
            }
        }
        return ans;
    }
    boolean isPossible(int[] nums,int limit,int m){
        int cow=1;
        int lastPosition=nums[0];
        for(int i=1;i<nums.length;i++){
            if(nums[i]-lastPosition>=limit){
                cow++;
                lastPosition=nums[i];
            }
            if(cow==m) return true;
        }
        return false;
    }
}