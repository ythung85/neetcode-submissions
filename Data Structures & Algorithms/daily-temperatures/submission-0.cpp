class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<pair<int, int>> st;
        // first index: temperature; second index: index

        for(int i = 0; i < temperatures.size(); i++){
            int t = temperatures[i];

            while(!st.empty() && t > st.top().first){
                auto kv = st.top();
                st.pop();
                result[kv.second] = (i-kv.second);
            }

            st.push({t, i});
        }

        return result;

    }
};
