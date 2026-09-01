class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>v;
        v.push_back(words[0]);
        for(int i=0 ; i<words.size() ; i++)
        {
            string str = words[i];
            sort(words[i].begin() , words[i].end());
            if(i > 0 && words[i]!=words[i-1]) v.push_back(str);
        }
        return v;
        
    }
};