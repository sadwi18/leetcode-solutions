// class Solution {
// public:
//     vector<int> decrypt(vector<int>& code, int k) {
//         int n = code.size();
//         vector<int> result(n, 0);
//         if (k == 0) return result;
//         for (int i = 0; i < n; i++) 
//         {
//             int sum = 0;
//             if (k > 0) 
//             {
//                 for (int j = 1; j <= k; j++) 
//                 {
//                     sum += code[(i + j) % n];
//                 }
//             } 
//             else 
//             {
//                 for (int j = 1; j <= -k; j++) 
//                 {
//                     sum += code[(i - j + n) % n];
//                 }
//             }
//             result[i] = sum;
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        if (k == 0) return res;
        int sum = 0;
        int start, end;
        if (k > 0) {
            start = 1;
            end = k;
        } else {
            start = n + k;
            end = n - 1;
        }
        for (int i = start; i <= end; i++) 
        {
            sum += code[i % n];
        }
        for (int i = 0; i < n; i++) {
            res[i] = sum;
            sum -= code[start % n];
            start++;
            end++;
            sum += code[end % n];
        }
        return res;
    }
};