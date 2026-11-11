
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int count = 0;

        for (string word : words) {

            bool valid = true;

            for (char ch : word) {

                if (allowed.find(ch) == string::npos) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count++;
            }
        }

        return count;
    }
};
