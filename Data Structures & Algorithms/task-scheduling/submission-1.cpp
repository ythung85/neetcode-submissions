class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        vector<int> count(26, 0);
        for(char c: tasks) count[c-'A']++;

        priority_queue<int> maxH;
        for(int cnt: count){
            if(cnt > 0){
                maxH.push(cnt);
            }
        }
        
        int max_freq_cnt = 0;
        int max_count = *max_element(count.begin(), count.end());
        for(int cnt: count){
            if(cnt == max_count){
                max_freq_cnt++;
            }
        }
        int max_freq = maxH.top();
        return max((int)tasks.size(), (max_freq-1)*(n+1)+max_freq_cnt);


    }
};
