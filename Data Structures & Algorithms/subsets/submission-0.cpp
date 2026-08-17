class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    vector<vector<int>> subsets(vector<int>& nums) {
        bt(nums, 0);

        return res;
    }

    void bt(vector<int>& nums, int start){
        res.push_back(path);

        for(int i = start; i<nums.size(); i++){
            path.push_back(nums[i]);
            bt(nums, i+1);
            path.pop_back();
        }
    }
};
