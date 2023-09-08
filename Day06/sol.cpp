#include <vector>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int max = 0;
        int i = 0;
        std::vector<bool> result(candies.size());

        // Find the maximum number of candies
        for (int j = 0; j < candies.size(); j++) {
            if (max < candies[j]) {
                max = candies[j];
            }
        }

        // Check if each child can have the maximum number of candies
        for (int j = 0; j < candies.size(); j++) {
            if (candies[j] + extraCandies >= max) {
                result[j] = true;
            } else {
                result[j] = false;
            }
        }

        return result;
    }
};
