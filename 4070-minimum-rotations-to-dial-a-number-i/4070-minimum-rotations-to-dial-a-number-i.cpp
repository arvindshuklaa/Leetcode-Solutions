class Solution {
public:
    int minRotations(string s) {
        int current = 0;
        int target = 0;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            int target = s[i] - '0';
            int distance = abs(current-target);
            int otherwayDistance = 10 - distance;

            ans += min(distance, otherwayDistance);
            current = target;
        }
        return ans;
    }
};