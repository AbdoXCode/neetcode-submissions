class Solution {
   public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp = heights;
        vector<int> expected;
        sort(heights.begin(), heights.end());

        expected = heights;
        heights = temp;
        int indices = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                indices++;
            }
        }
        return indices;
    }
};