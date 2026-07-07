class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int arr[100]={0};

        for (int i =0;i<prices.size();i++) {
            for (int j=1+i;j<prices.size();j++) {
                if (prices[j] - prices[i] > arr[i]) {
                    arr[i] = prices[j] - prices[i];
                }
            }
        }
        int max_profit = -999999;
        for (int s:arr) {
            max_profit = max(max_profit,s);
        }
        if (max_profit > 0) {
            return max_profit;
        }else {
            return 0;
        }
    }
};
