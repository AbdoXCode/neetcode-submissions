class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int zeros = 0;

        for (int x : nums) {
            if (x != 0) {
                ans.push_back(x);
            } else {
                zeros++;
            }
        }

        ans.insert(ans.end(), zeros, 0);

        nums = ans;
    }
};