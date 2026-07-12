class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<pair<int, int>> st;

        for(int i = 0; i<temperatures.size(); i++){
            int t = temperatures[i];
            while(!st.empty() && t > st.top().second){
                auto kv = st.top();
                st.pop();
                result[kv.first] = i - kv.first;
            }

            st.push({i, t});
        }

        return result;
    }
};
