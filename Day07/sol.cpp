#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        int j = 0;

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
                    flowerbed[i] = 1; // Place a flower at the current position
                    count++;
                    j = i + 2; // Move j two positions ahead
                }
            }
        }

        return count >= n;
    }
};
