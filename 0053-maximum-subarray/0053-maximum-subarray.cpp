class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n = nums.size();
        // int maxSUM = INT_MIN;
        // for(int st = 0; st < n; st++){
        //     int currentSum = 0;
        //     for(int end = st; end < n; end++){
        //         currentSum += nums[end];
        //         maxSUM = max(currentSum, maxSUM);
        //     }
        // }
        // return maxSUM;
        int currentSum = 0; 
        int maxSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            currentSum += nums[i];
            maxSum = max(currentSum, maxSum);
            if(currentSum < 0){
                currentSum = 0;
            }
        }
        return maxSum;
    }
};