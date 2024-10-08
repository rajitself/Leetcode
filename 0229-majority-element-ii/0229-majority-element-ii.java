class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int n=nums.length;
        List<Integer> ans=new ArrayList<>();
        Map<Integer,Integer> fre=new HashMap<>();
        for(var k:nums){
            if(!fre.containsKey(k))
            fre.put(k,1);
            else
            fre.put(k,fre.get(k)+1);
            if(!ans.contains(k)&&fre.get(k)>n/3)
            ans.add(k);
        }
        

        return ans;
    }
}