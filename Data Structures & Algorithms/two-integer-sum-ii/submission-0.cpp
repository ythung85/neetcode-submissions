class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;

        while(l<r){
            int current = numbers[l] + numbers[r];
            if(current > target){
                r--;
            }
            else if(current < target){
                l++;
            }
            else{
                return {l+1, r+1};
            }
        }

        return {};
    }
};
