class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;

        for (char x:s) {
            if (x == '(' || x== '[' || x == '{') {
                stack.push_back(x);
            }else if (stack.size() > 0 && (x == ')' && stack.back() == '(' || x== ']' && stack.back() == '[' || x == '}' && stack.back() == '{') ) {
                stack.pop_back();
            }else {
                stack.push_back(x);
            }
        }
        return stack.size() > 0 ? false : true;
    }
};
