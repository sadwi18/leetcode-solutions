class Solution {
public:
    bool isOpen(char c) {
        if(c=='(') return true;
        else return false;
    }
    bool isClose(char c) {
        if(c==')') return true;
        else return false;
    }
    int maxDepth(string s) {
        stack<char>st;
        int ans=0;
        for(int i=0 ; i<s.size() ; i++) {
            if(isOpen(s[i])) {
                st.push(s[i]);
            } 
            else if(isClose(s[i])) {
                st.pop();
            }
            ans = max(ans,(int)st.size());
        }
        return ans;
    }
};