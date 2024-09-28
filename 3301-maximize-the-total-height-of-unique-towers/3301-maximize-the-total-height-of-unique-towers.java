class Solution {
    public long maximumTotalSum(int[] arr) {
        int n=arr.length;

        Arrays.sort(arr);
        long ans=arr[n-1];

        for(int i=n-2;i>=0;i--){
            if(arr[i]>=arr[i+1]){
                int temp=arr[i]-arr[i+1]+1;
                arr[i]-=temp;
                if(arr[i]<1) return -1;
            }
            ans+=arr[i];
        }
        return ans;
    }
}