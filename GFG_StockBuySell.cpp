
class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        int profit = 0;
        for (int i = 1; i < n; i++){
            profit += max(0, prices[i] - prices[i-1]);
        }
        return profit;
    }
};