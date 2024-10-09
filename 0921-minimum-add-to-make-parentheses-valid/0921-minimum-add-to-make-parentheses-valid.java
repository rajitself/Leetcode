class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character> set=new Stack<>();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='(')
            set.push('(');
            else {
                if(set.size()!=0&&set.peek()=='(')
                set.pop();
                else
                set.push(')');
            }
        }
        return set.size();
    }
}