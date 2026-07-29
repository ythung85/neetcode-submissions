class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        array<int, 26> counts = {0};
        for (char c : s1) {
            counts[c - 'a']++;
        }

        int left = 0;

        for (int right = 0; right < s2.size(); right++) {
            counts[s2[right] - 'a']--; 

            while (counts[s2[right] - 'a'] < 0) {
                counts[s2[left] - 'a']++; 
                left++;                  
            }

            // 如果窗口的長度剛好等於 s1 的長度，且中間沒有違規（沒被扣到負數）
            // 那此時 counts 必定全為 0！
            if (right - left + 1 == s1.size()) {
                return true;
            }
        }

        return false;
    }
};
