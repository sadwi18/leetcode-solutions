class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        if(s.size() < p.size()) return res;
        vector<int>target(26);
        vector<int>window(26);
        for(int i=0 ; i<p.size() ; i++) {
            target[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        if(target == window) res.push_back(0);
        // slide the window
        for(int i=p.size() ; i<s.size() ; i++) {
            window[s[i]-'a']++; // add current char into window
            window[s[i-p.size()]-'a']--; // remove the initial char from window
            if(window == target) res.push_back(i-p.size()+1);
        }
        return res;


        // if(p.size() > s.size()) return {};
        // vector<int>res;
        // string target = p;
        // sort(target.begin(), target.end());
        // int i=0;
        // while(i<s.size()-p.size()+1) {
        //     string key = "";
        //     for(int j=i ; j<i+p.size() ; j++) {
        //         key+=s[j];
        //     }
        //     sort(key.begin(), key.end());
        //     if(key == target) res.push_back(i);
        //     i++;
        // }
        // return res;
    }
};