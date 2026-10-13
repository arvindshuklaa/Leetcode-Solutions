class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> m;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if((i == 0 || nums[i] != nums[i-1])&& (i+1 >= n || nums[i] != nums[i+1])){
            m.push_back(nums[i]);
            }
        }
        return m;
    }
};