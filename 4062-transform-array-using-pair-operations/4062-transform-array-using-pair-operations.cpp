class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long s1=0, s2=0;
        for(auto x : source) s1+=x;
        for(auto y : target) s2+=y;
        return s1==s2;

        
    }
};