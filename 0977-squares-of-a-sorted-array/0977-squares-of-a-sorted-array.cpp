class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> m;
        for(int i = 0; i < nums.size(); i++){
            int sqr = nums[i]*nums[i];
            m.push_back(sqr);
        }
        sort(m.begin(), m.end());
        return m;
    }
};