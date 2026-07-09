class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> gAnagrams;

        for(string s: strs){
            string sort_s = s;
            sort(sort_s.begin(), sort_s.end());

            gAnagrams[sort_s].push_back(s);
        }
        
        vector<vector<string>> results;
        for(auto& str: gAnagrams){
            results.push_back(str.second);
        }

        return results; 
    }  
};
