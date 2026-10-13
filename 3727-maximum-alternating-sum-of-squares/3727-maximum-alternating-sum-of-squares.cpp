class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long>squares;
        for(int i=0 ; i<nums.size() ; i++) {
            squares.push_back((long long)nums[i]*nums[i]);
        }
        sort(squares.begin() , squares.end());
        int mini_values = nums.size()/2;
        long long sum=0;
        for(int i=0 ; i<nums.size() ; i++) {
            if(i<mini_values) sum-=squares[i];
            else sum+=squares[i];
        }
        return sum;

        
    }
};