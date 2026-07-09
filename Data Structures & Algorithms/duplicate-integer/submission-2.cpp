class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> arr;

        for(int num: nums){
            if(arr.count(num)){
                return true;
            }else{
                arr.insert(num);
            }
        }

        return false;
    }
};