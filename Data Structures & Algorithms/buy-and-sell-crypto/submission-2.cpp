class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int sp = prices[0];
        for(int i = 1; i < prices.size(); i++){
            mp = max(prices[i]-sp, mp);
            sp = min(sp, prices[i]);
            
        }

        return mp;
    }
};
