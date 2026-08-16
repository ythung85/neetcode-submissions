class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxH;
        for(int num: stones){
            maxH.push(num);
        }

        while(maxH.size()>1){
            int h1 = maxH.top();
            maxH.pop();
            int h2 = maxH.top();
            maxH.pop();

            maxH.push(h1-h2);
        }
        
        return maxH.top();
    }
};
