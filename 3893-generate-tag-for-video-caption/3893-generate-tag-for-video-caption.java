class Solution {
    public String generateTag(String caption) {
        caption.trim();
        String[] words = caption.split(" ");
        StringBuilder res =  new StringBuilder();
        int first = 1;
        for(int i = 0; i < words.length; i++){
            String word = words[i].toLowerCase();
            if(word.isEmpty()) continue;
            if(first == 1) {
                res.append(word);
                first = 0;
            }
            else if(!word.isEmpty()){
                res.append(Character.toUpperCase(word.charAt(0)))
                    .append(word.substring(1));
            }
        }
        String ans = "#" + res.toString();
        return ans.length() > 100 ? ans.substring(0,100) : ans;
    }
}