class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;

        for (int i = 0;i<operations.size();i++) {
            if (operations[i] == "+" ) {
                int n =stack.size();
                stack.push_back(stack[n-1] + stack[n-2]);
            }else if (operations[i] == "C") {
                stack.pop_back();
            }else if (operations[i] == "D") {
                stack.push_back(2*stack.back());
            }else {
                stack.push_back(stoi(operations[i]));
            }
        }

        int counter = 0;
        for (int x:stack) {
            counter += x;
        }
        return counter;
    }
};