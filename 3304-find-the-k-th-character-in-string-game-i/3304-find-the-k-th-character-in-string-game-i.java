class Solution {
    public char kthCharacter(int k) {
        int i=0;
        String s="a";
        while(i<k){
            String temp="";
            for(int j=0;j<s.length();j++){
                char c;
                if(s.charAt(j)=='z') c='a';
                else
                c=(char)(s.charAt(j)+1);
                temp+=c;
                i++;
            }
            s+=temp;
        }


        return s.charAt(k-1);
    }
}