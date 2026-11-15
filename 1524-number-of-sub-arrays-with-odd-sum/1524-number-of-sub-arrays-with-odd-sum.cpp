class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        // int n = arr.size();
        // int ans = 0;
        // int MOD = 1e9 + 7;
        // for(int i = 0; i < n; i++){
        //     int sum = 0;
        //     for(int j = i; j < n; j++){
        //         sum += arr[j];

        //         if(sum % 2 != 0){
        //            ans = (ans+1) % MOD; 
        //         }
        //     }
        // }
        // return ans;




        int MOD = 1e9 + 7;
        long long even = 1;
        long long odd = 0;
        long long ans = 0;


        int prefix = 0;

        for(int num : arr){
            prefix += num;

            if(prefix % 2 == 0){
                ans = (ans + odd) % MOD;
                even++;
            }
            else{
                ans = (ans + even) % MOD;
                odd++;
            }
        }
        return ans;
    }
};