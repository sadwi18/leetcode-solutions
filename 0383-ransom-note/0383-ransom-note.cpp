class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for (char c : magazine) {
            mp[c]++;
        }
        bool valid=true;
        for(char c : ransomNote) {
            if(mp.find(c) != mp.end() && mp[c] != 0) {
                mp[c]--;
                valid = true;
            }
            else {
                valid = false;
                break;
            }
        }
        return valid;
        
    }
};