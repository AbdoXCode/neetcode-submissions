class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501] = {0};

        for (int x:arr) {
            freq[x]++;
        }

        for (int i =500;i>0;i--) {
            if (i == freq[i]) return i;
        }
        return -1;
    }
};