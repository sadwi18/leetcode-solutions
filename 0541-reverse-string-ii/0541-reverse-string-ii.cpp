class Solution {
public:
    string reverseStr(string s, int k) {
        int start = 0;
        int n = s.size();
        while(start<s.size())
        {
            int end = min(start+k , n);
            reverse(s.begin()+start, s.begin()+end);
            start+=2*k;
        }
        return s;
    }
};