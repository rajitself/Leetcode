class Solution {
    public long dividePlayers(int[] A) {
        int n=A.length;
        int i=0;
        int j=n-1;
        Arrays.sort(A);

        int equal=A[0]+A[n-1];
        long ans=0;
        while(i<j){
            if(A[i]+A[j]!=equal)
            return -1;
            ans+=A[i++]*A[j--];
        }
        return ans;
    }
}