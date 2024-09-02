class Solution {
    public int nthUglyNumber(int n) {
        int[] factors = {2, 3, 5};
        int i2 = 0, i3 = 0, i5 = 0;
        ArrayList<Integer> uglyNumbers = new ArrayList<>(Arrays.asList(1));
        while (uglyNumbers.size() < n) {
            int next2 = uglyNumbers.get(i2) * 2;
            int next3 = uglyNumbers.get(i3) * 3;
            int next5 = uglyNumbers.get(i5) * 5;
            int next = Math.min(next2, Math.min(next3, next5));
            if (next == next2) i2++;
            if (next == next3) i3++;
            if (next == next5) i5++;
            uglyNumbers.add(next);
        }
        return uglyNumbers.get(n - 1);
    }
}