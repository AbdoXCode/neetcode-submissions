class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i =0;i<matrix.size();i++) {
            int l =0;
            int r = matrix[i].size()-1;

            while (l<=r) {
                int m = (l+r)/2;

                if (matrix[i][m] == target) return true;

                if (matrix[i][m] > target ) {
                    r = m-1;
                }else if (matrix[i][m] < target) {
                    l = m+1;
                }
            }
        }
        return false;
    }
};
