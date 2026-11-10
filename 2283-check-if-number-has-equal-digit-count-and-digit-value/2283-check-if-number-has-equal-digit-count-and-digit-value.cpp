
class Solution {
public:
    bool digitCount(string num) {

        int freq[10] = {0};

        // Step 1: Count frequency of digits
        for (int i = 0; i < num.length(); i++) {
            freq[num[i] - '0']++;
        }

        // Step 2: Check every index
        for (int i = 0; i < num.length(); i++) {

            if (freq[i] != num[i] - '0') {
                return false;
            }
        }

        return true;
    }
};
