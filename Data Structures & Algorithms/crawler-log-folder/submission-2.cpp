class Solution {
   public:
    int minOperations(vector<string>& logs) {
        stack<string> stk;

        for (string x : logs) {
            if (x[0] != '.') {
                stk.push(x);
            } else if (x == "../" && !stk.empty()) {
                stk.pop();
            }
        }
        return stk.size();
    }
};