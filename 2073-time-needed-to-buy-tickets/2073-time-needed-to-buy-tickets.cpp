class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        deque<int> q;
        for (int i = 0; i < tickets.size(); i++) {
            q.push_back(i);
        }
        int ans = 0;
        while (tickets[k] > 0) {
            int front = q.front();
            q.pop_front();
            tickets[front]--;
            ans++;
            if (tickets[front] > 0) {
                q.push_back(front);
            }
        }
        return ans;
    }
};
