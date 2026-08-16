class Solution {

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>> maxH;
        for(auto& point: points){
            int dis = point[0]*point[0] + point[1]*point[1];
            maxH.push({dis, {point[0], point[1]}});

            if(maxH.size() > k){
                maxH.pop();
            }
        }

        vector<vector<int>> res; 
        while(maxH.size()>0){
            res.push_back({maxH.top().second.first, maxH.top().second.second});
            maxH.pop();
        }

        return res;
        
        
    }
};
