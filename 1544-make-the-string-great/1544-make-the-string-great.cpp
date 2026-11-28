class Solution {
public:
    string makeGood(string s) {
        stack<int>st;
        st.push(s[0]);
        for(int i=1 ; i<s.size() ; i++) {
            if(!st.empty() && (s[i]==st.top()+32 || s[i]==st.top()-32)) {
                if(!st.empty()) st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        string ans = "";
        while(!st.empty()) {
            char ch = st.top();
            ans+=ch;
            st.pop();
        } 
        reverse(ans.begin(), ans.end());
        return ans;
    }
};