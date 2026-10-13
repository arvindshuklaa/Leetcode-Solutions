class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentProd = 1;
        int maxProd = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            currentProd *= nums[i];
            maxProd = max(currentProd, maxProd);
            if(currentProd == 0){
                currentProd = 1;
            }
        }
        currentProd = 1;
        for(int i = nums.size()-1; i >= 0; i--){
            currentProd *= nums[i];
            maxProd = max(currentProd, maxProd);
            if(currentProd == 0){
                currentProd = 1;
            }
        }
        return maxProd;
    }
};