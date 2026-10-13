class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       int maxElement = *max_element(nums.begin(), nums.end());

       int sum = 0;
       for(int i = 0; i < k; i++){
           sum += maxElement;
           maxElement++;
       }
       return sum;   
    }
};