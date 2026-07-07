class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;

        for (int i = 0;i<operations.size();i++) {
            if (operations[i] == "+" ) {
                int prev = stack.back();
                stack.pop_back();
                int secPrev = stack.back();
                stack.push_back(prev);

                stack.push_back(prev + secPrev);
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