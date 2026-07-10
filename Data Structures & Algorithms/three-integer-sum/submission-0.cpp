class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<nums.size();i++){
            int current = nums[i];

            if(current > 0){
                break; 
            }
            if(i > 0 && current == nums[i-1]){
                continue;
            }
            int l = i+1;
            int r = nums.size()-1;

            while(l < r){
                int sumnum = current + nums[l] + nums[r];
                if (sumnum > 0){
                    r--;
                }
                else if (sumnum < 0){
                    l++;
                }
                else{
                    result.push_back({current, nums[l], nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1]){
                        l++;
                    }
                }
            }
        }

        return result;
    }
};
