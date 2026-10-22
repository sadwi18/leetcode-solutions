class Solution {
public:
    int R_numeric(char ch) {
        if (ch == 'I') return 1;
        else if (ch == 'V') return 5;
        else if (ch == 'X') return 10;
        else if (ch == 'L') return 50;
        else if (ch == 'C') return 100;
        else if (ch == 'D') return 500;
        return 1000;
    }
    int romanToInt(string s) {
        int sum = 0;
        int n = s.size();
        for (int i=0; i<n; i++) {
            int curr = R_numeric(s[i]);
            if (i+1 < n && curr < R_numeric(s[i + 1])) {
                sum -= curr;
            } else {
                sum += curr;
            }
        }
        return sum;
    }
};