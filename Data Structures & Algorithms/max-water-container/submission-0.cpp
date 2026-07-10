class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int maxA = -1;

        while(l<r){
            maxA = max(maxA, (r-l)*min(heights[l], heights[r]));
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return maxA;
    }
};
