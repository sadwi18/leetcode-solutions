class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<char> stack;
        string result = "";
          for(char ch : s) {
            if(ch == '(') {
                if(!stack.empty()) {
                    result += ch;
                }
                stack.push_back(ch);
            } 
            else {
                stack.pop_back();
                if(!stack.empty()) {
                    result += ch;
                }
            }
        }
        return result;
        
        
    }
};