class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(char c : s) mp[c]++;
        for(char c : t) {
            if(mp.find(c)!=mp.end() && mp[c]>0) mp[c]--;
        }
        int ans=0;
        for(auto &x : mp) ans+=x.second;

        return ans;
    }
};