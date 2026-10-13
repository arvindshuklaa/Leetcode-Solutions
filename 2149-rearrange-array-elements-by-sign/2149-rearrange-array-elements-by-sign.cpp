class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int positive = 0;
        int negative = 1;
        
        vector<int> ans(n);

        for(int x : nums){
            if(x > 0){
                ans[positive] = x;
                positive +=2;
            }
            else{
                ans[negative] = x;
                negative += 2;
            }
        }
        return ans;
    }
};