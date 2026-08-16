class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void bt(vector<int>& nums, int start, int target){
        if (target == 0) {
            res.push_back(path);
            return;
        }
        if (target < 0) {
            return;
        }

        for(int i = start; i < nums.size(); i++){
            path.push_back(nums[i]);
            bt(nums, i, target - nums[i]); 
            
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        bt(nums, 0, target);

        return res;
    }
};
