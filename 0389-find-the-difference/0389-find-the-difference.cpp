class Solution {
public:
    char findTheDifference(string s, string t) {
        int ssum = 0;
        int tsum = 0;
        for(char c : s) {
            ssum += c;
        }
        for(char c : t) {
            tsum += c;
        }
        return char(tsum - ssum);
        // map<char,int>mp;
        // for(char c : s) {
        //     mp[c]++;
        // }
        // for(char c : t) {
        //     mp[c]++;
        // }
        // for(auto x : mp) {
        //     if(x.second==1) return x.first;
        // }
        // return '\0';
    }
};