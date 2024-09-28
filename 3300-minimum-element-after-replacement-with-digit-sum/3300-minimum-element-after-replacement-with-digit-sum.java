class Solution {
    public int minElement(int[] nums) {
        int n=nums.length;
        int min=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            int temp=sum(nums[i]);
            min=Math.min(min,temp);

        }
        return min;
    }
    int sum(int num){
        int temp=0;
        while(num>0){
            temp+=num%10;
            num/=10;
        }
        return temp;
    }
}