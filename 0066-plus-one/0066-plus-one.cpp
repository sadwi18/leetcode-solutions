class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1 ; i>=0 ; i--) {
            if(digits[i]<9) {
                digits[i]++;
                return digits;
            }
            else {
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;

        // vector<int>v;
        // string s = "";
        // for(int i=0 ; i<digits.size() ; i++) {
        //     s+=char(digits[i]+'0');
        // }
        // int num = stoi(s);
        // num += 1;
        // string ans = to_string(num);
        // for(int i=0 ; i<ans.size() ; i++) {
        //     v.push_back(ans[i]-'0');
        // }
        // return v;
    }
};