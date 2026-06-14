class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mapping;

        int l = 0 ;
        int result = 0;

        for(int i=0; i<s.size(); i++){
            if(mapping.count(s[i])){
                l = max(mapping[s[i]]+1, l);
            }

            mapping[s[i]] = i;
            result = max(result, i-l+1);
        }

        return result;
    }
};
