class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>sm;
        unordered_map<char,int>tm;
        int mini = INT_MAX;
        for(char c : s) sm[c]++;
        for(char c : target) tm[c]++;
        for(auto x : tm) {
            char ch = x.first;
            int req = x.second;
            int available = sm[ch];
            if(tm.find(ch) != tm.end()) {
                mini = min(available/req,mini);
            }
        }
        return mini;
        
    }
};