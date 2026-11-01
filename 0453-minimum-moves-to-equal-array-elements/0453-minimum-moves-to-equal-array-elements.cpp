class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long sum = 0;
        int minm = INT_MAX;
        for (int num : nums) {
            sum += num;
            minm = min(minm, num);
        }
        return sum - (long long)nums.size() * minm;
    }
};
