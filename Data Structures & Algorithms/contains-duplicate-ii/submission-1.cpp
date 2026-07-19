class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int p1 = 0;

        while (p1 < nums.size()) {
            int p2 = p1 + 1;
            while (p2 < nums.size()) {
                if (nums[p1] == nums[p2] && abs(p1 - p2) <= k) {
                    return true;
                }

                p2++;
            }
            p1++;
        }
        return false;
    }
};