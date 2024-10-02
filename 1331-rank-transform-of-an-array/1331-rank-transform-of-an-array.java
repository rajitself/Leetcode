class Solution {
    public int[] arrayRankTransform(int[] arr) {
        int n=arr.length;
        int[] clone=new int[n];
        for(int i=0;i<n;i++){
            clone[i]=arr[i];
        }
        Arrays.sort(arr);
        HashMap<Integer,Integer> map=new HashMap<>();
        int k=1;
        for(int i=0;i<n;i++){
            if(!map.containsKey(arr[i]))
            map.put(arr[i],k++);
        }
        for(int i=0;i<n;i++){
            clone[i]=map.get(clone[i]);
        }
        return clone;
    }
}