class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        int count1 = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){

            bool alreadyChecked = false;

            for(int k = 0; k < i; k++){
                if(nums[k] == nums[i]){
                    alreadyChecked = true;
                    break;
                }
            }

            if(alreadyChecked){
                continue;
            }

            int count = 0;

            int first = -1;
            int second = -1;
            int third = -1;
            for(int j = 0; j < n; j++){

                if(nums[i] == nums[j]){

                    count++;

                    if(count == 1){
                        first = j;
                    }
                    else if(count == 2){
                        second = j;
                    }
                    else if(count == 3){
                        third = j;
                    }
                }
            }
            if(count == 3 && second - first == third - second){
                count1++;
            }
        }

        return count1;
    }
};