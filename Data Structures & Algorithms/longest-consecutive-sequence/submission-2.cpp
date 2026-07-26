class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;

        for (int x : nums)
            m[x]++;

        int ans = 0;

        for (int x : nums) {

            // Skip if it is not the start of a sequence
            if (m.find(x - 1) != m.end())
                continue;

            int cnt = 1;
            int cur = x + 1;

            while (m.find(cur) != m.end()) {
                cnt++;
                cur++;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};