class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;

        while(!nums.empty()){
            set<int> st;

            for(int x : nums){
                st.insert(x);
            }
            for(int x : st){
                ans.push_back(x);
            }
            for(int x : st){
                auto it = find(nums.begin(), nums.end(),x);
                if(it != nums.end()){
                    nums.erase(it);
                }
            }
        }
        return ans;
    }
};