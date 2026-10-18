class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int largest = -1;
        int secondLargest = -1;
        int largestIndex = -1;
        for(int i = 0; i < n; i++){
            if(nums[i] > largest){
                secondLargest = largest; 
                largest = nums[i];
                largestIndex = i;
            }
            else if(nums[i] > secondLargest){
                secondLargest = nums[i];
            }
        }
        if(secondLargest == -1 || largest >= 2*secondLargest){
            return largestIndex;
        }
        return -1;
    }
};