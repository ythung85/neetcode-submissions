class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int lgs = 0;

        for(int num: numSet){
            if(numSet.find(num-1) == numSet.end()){
                int current = num;
                int current_streak = 1;

                while(numSet.find(current+1) != numSet.end()){
                    current += 1;
                    current_streak += 1;
                }

                lgs = max(current_streak, lgs);
            }

        }

        return lgs;
    }
};
