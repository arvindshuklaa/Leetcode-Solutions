class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<int> st;
        // for(int i = 0; i < nums.size(); i++){
        //     st.insert(nums[i]);
        // }
        // int i = 0;
        // for(int x : st){
        //     nums[i] = x;
        //     i++;
        // }
        // return i;

        int i = 0;
        for(int j = 1; j < nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};