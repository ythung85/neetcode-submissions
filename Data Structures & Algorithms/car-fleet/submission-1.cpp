class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> ps;

        for(int i = 0; i < position.size(); i++){
            ps.push_back({position[i], speed[i]});
        }

        sort(ps.rbegin(), ps.rend());
        vector<double> st;

        for(auto& [ps, sp] : ps){
            st.push_back((double)(target - ps)/ sp);
            if(st.size() >= 2 && st.back() <= st[st.size()-2]){
                st.pop_back();
            }
        }

        return st.size();
    }
};
