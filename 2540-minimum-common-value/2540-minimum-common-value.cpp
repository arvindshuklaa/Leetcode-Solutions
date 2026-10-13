class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> common(nums1.begin(), nums1.end());
        for(int cmn : nums2){
           if(common.count(cmn)){
               return cmn;
            }
        }
        return -1;
    }
};