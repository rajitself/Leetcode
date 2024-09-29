class Solution {
    public int countOfSubstrings(String word, int k) {
        int n = word.length();
        int ans = 0;
        int size = k + 5;
        int p = 0;
        while (size <= n) {
            kk: for (int i = 0; p + i + 5 + k <= n; i++) {

                String mainString = word.substring(i, i + size);
                System.out.println("hell");
                int[] flag = new int[6];
                // Check if the substring is present
                for (int j = 0; j < mainString.length(); j++) {

                    if (mainString.charAt(j) == 'a')
                        flag[0]++;
                    else if (mainString.charAt(j) == 'e')
                        flag[1]++;
                    else if (mainString.charAt(j) == 'i')
                        flag[2]++;
                    else if (mainString.charAt(j) == 'o')
                        flag[3]++;
                    else if (mainString.charAt(j) == 'u')
                        flag[4]++;
                    else
                        flag[5]++;
                }
                System.out.println(flag[5]);
                for (int t = 0; t < 5; t++) {
                    if (flag[t] == 0)
                        continue kk;
                }
                if (flag[5] == k)
                    ans++;
            }
            size++;
            p++;
        }
        return ans;
    }
}