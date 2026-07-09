class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Mapping;

        for(int i = 0; i<nums.size(); i++){
            int need = target - nums[i];
            if(Mapping.count(need)){
                return {Mapping[need], i};
            }

            Mapping[nums[i]] = i;
        }

        return {};
    }
};