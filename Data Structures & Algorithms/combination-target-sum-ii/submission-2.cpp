class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        bt(candidates, 0, target);

        return res;
    }
    void bt(vector<int>& candidates, int start, int target){
        if(target == 0){
            res.push_back(path);
            return;
        }

        if(target < 0){
            return;
        }

        for(int i = start; i<candidates.size(); i++){
            if(i > start && candidates[i]==candidates[i-1]){
                continue;
            }
            path.push_back(candidates[i]);
            bt(candidates, i+1, target-candidates[i]);
            path.pop_back();
        }
    }
};
