class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> visited;

    vector<vector<int>> permute(vector<int>& nums) {
        visited.resize(nums.size(), false);
        bt(nums);

        return res;
    }

    void bt(vector<int>& nums){
        if(path.size() == nums.size()){
            res.push_back(path);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(visited[i]) continue;

            path.push_back(nums[i]);
            visited[i] = true;
            bt(nums);
            visited[i] = false;
            path.pop_back();
        }

    }
};
