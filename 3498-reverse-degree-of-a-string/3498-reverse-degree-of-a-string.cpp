class Solution {
public:
    int reverseDegree(string s) {
        vector<int>v(26);
        int j=26;
        for(int i=0 ; i<26 ; i++) {
            v[i]=j;
            j--;
        }
        int ans = 0;
        for(int i=0 ; i<s.size() ; i++) {
            int val = s[i]-'a';
            ans += v[val]*(i+1);
        }
        return ans;
    }
};