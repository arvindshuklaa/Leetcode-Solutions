class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxWater = 0;
        // int n = height.size();
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1; j < n; j++){
        //         int width = j-i;
        //         int hgt = min(height[i], height[j]);
        //         int area = width*hgt;
        //         maxWater = max(maxWater,area);
        //     }
        // }
        // return maxWater;                //Brute Force 

        int maxWater = 0;
        int n = height.size();
        int lp = 0;
        int rp = n-1;
        while(lp < rp){
            int width = rp-lp;
            int hiet = min(height[lp], height[rp]);
            int currentWater = width*hiet;
            maxWater = max(maxWater, currentWater);
            if(height[lp] < height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return maxWater;

    }
};