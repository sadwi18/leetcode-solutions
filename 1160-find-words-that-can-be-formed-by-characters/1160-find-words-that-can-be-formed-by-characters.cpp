class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(char c : chars) {
            mp[c]++;
        }
        int ans=0;
        for(string word : words) {
            unordered_map<char,int>copy = mp;
            bool valid = true;
            for(char c : word) {
                if(copy.find(c) != copy.end() && copy[c] != 0) {
                    copy[c]--;
                }
                else {
                    valid = false;
                    break;
                }
            }
            if(valid) ans+=word.length();
        }
        return ans;
    }
};