class Solution {
   public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        if (x <= 3) return 1;

        for (int i = 1; i <= x / 2; i++) {
            long long sq = i * i;

            if (sq == x) return i;
            if (sq > x) return i - 1;
        }

        return -1;
    }
};