class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = 0; int max = nums.size()-1;
        while(min < max){
            if(nums[min] + nums[max] == 0 ){
                return nums[max];
            }
            else if((nums[min] + nums[max]) < 0){
                min++;
            }
            else{
                max--;
            }
        }
        return -1;
    }
};