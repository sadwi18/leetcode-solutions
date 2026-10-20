class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>lastseen;
        int left = 0, ans = 0;
        for(int right = 0 ; right < s.size() ; right++) {
            char c = s[right];
            if(lastseen.contains(c) && lastseen[c]>=left) {
                left = lastseen[c]+1;
            }
            lastseen[c] = right;
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};