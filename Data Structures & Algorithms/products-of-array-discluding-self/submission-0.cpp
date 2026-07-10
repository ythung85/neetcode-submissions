class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> preproduct(n);
        vector<int> postproduct(n); 
        vector<int> result(n);

        preproduct[0] = 1;
        postproduct[nums.size()-1] = 1;

        for(int i = 1; i < nums.size(); i++){
            preproduct[i] = nums[i-1] * preproduct[i-1];
        }

        for(int i = nums.size()-2; i >= 0; i--){
            postproduct[i] = nums[i+1] * postproduct[i+1];
        }

        for(int i = 0; i<nums.size(); i++){
            result[i] = preproduct[i]*postproduct[i];
        }

        return result;
    }   
        
};
