class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> left2right = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c:s){
            if(left2right.count(c)){
                if(!stack.empty() && stack.top() == left2right[c]){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack.push(c);
            }
        }

        return stack.empty();
    }
};
