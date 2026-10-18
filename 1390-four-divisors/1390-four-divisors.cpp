
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;

        for (int x : nums) {
            int count = 0;
            int sum = 0;

            for (int j = 1; j * j <= x; j++) {
                if (x % j == 0) {
                    count++;
                    sum += j;

                    if (j != x / j) {
                        count++;
                        sum += x / j;
                    }
                }
            }

            if (count == 4) {
                total += sum;
            }
        }

        return total;
    }
};
