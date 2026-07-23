class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int sp = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if (prices[i] > sp){
                mp = max(mp, prices[i] - sp);
            }else{
                sp = prices[i];
            }
            
        }

        return mp;
    }
};
