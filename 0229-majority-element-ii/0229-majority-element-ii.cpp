class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> m;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > n/3){
                if(m.empty() || m.back() != nums[i]){
                m.push_back(nums[i]);
                }
            }
        }
        return m;
    }
};