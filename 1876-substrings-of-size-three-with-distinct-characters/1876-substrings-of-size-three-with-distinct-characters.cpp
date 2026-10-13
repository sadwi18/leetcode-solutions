class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size() < 3) return 0;
        int i=0;
        int count=0;
        while(i <= s.size()-3) {
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]) {
                count++;
            }
            i++;
        }
        return count;
    }
};