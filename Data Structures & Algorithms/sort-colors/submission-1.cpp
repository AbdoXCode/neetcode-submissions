class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size() *2;
        if (n == 2) return;
        vector<int> counter(n,0);

        for (int i=0;i<nums.size();i++ ) {
            counter[nums[i]]++;
        }

        int j =0;
        for (int i = 0;i<n;i++) {
            if (counter[i] > 0) {
                nums[j] = i;
                counter[i]--;
                i--;
                j++;
            }
        }
    }
};