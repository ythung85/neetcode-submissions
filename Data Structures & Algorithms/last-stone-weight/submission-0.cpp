class Solution {

public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int stone: stones){
            maxHeap.push(stone);
        }

        while(maxHeap.size()>1){
            int one = maxHeap.top();
            maxHeap.pop();
            int second = maxHeap.top();
            maxHeap.pop();
            if(second<one){
                maxHeap.push(one - second);
            }
        }

        maxHeap.push(0);

        return maxHeap.top();
    }
};
