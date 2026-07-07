class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;

        for (string x:operations) {
            if (x == "+" ) {
                int n =stack.size();
                stack.push_back(stack[n-1] + stack[n-2]);
            }else if (x == "C") {
                stack.pop_back();
            }else if (x == "D") {
                stack.push_back(2*stack.back());
            }else {
                stack.push_back(stoi(x));
            }
        }

        int counter = 0;
        for (int x:stack) {
            counter += x;
        }
        return counter;
    }
};