class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // if(n == 1){
        //     return nums[0];
        // }
        // if(nums[0] != nums[1]){
        //     return nums[0];
        // }
        // if(nums[n-1] != nums[n-2]){
        //     return nums[n-1];
        // }
        // for(int i = 1; i < n-1; i++){
        //     if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;



        // int n = nums.size();
        
        // int left = 0;
        // int right = n-1;

        // while(left <= right){
        //     int mid = left + (right-left)/2;

        //     if(mid == 0 && nums[0] != nums[1]){
        //         return nums[mid];
        //     }
        //     if(mid == n-1 && nums[n-1] != nums[n-2]){
        //         return nums[mid];
        //     }
        //     if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
        //         return nums[mid];
        //     }
        //     if(mid % 2 == 0){
        //         if(nums[mid] == nums[mid-1]){
        //             right = mid-1;
        //         }
        //         else{
        //             left = mid+1;
        //         }
        //     }
        //     else{
        //         if(nums[mid] == nums[mid-1]){
        //             left = mid+1;
        //         }
        //         else{
        //             right = mid-1;
        //         }
        //     }
        // }
        // return -1;



        int n = nums.size();
        int left = 0;
        int right = n-1;

        while(left < right){
            int mid = left + (right-left)/2;

            if(mid % 2 == 1){
                mid--;
            }
            if(nums[mid] == nums[mid+1]){
                left = mid+2;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};