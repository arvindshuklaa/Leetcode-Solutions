class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // for(int value : nums){
        //     int freq = 0;
        //     for(int element : nums){
        //         if(value == element){
        //             freq++;
        //         }
        //     }
        //     if(freq > n/2){
        //         return value;
        //     }
        // }
        // return -1;                      // Time Comp. = o(n^2)





        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // return nums[n/2];                    //Time Comp. = O(log n)

        int freq = 0; 
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }   
        return ans;
    }
};