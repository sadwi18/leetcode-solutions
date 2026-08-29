class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        int oddcount = 0;
        int evencount = 0;
        for(auto x : mp) 
        {
            if(x.second % 2 != 0) 
            {
                evencount += x.second - 1;
                oddcount++;
            }
            else {
                evencount += x.second;
            }
        }
        if(oddcount >= 1)
            return evencount + 1;
        else
            return evencount;
    }
};