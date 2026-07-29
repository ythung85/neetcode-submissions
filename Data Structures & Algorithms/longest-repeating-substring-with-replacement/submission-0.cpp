class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        unordered_map<char, int> mp;
        int l = 0, max_freq = 0;

        for(int r = 0; r<s.size(); r++){
            mp[s[r]]++;
            max_freq = max(max_freq, mp[s[r]]);

            while((r-l+1)-max_freq > k){
                mp[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
        }

        return res;
        
    }
};
