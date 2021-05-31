/*
 * ShuffleArray-bitwise.cpp
 * Arcodeo Solution
 * LeetCode Problem 1470
 */

#include "ShuffleArray.h"
#include <stdint.h>
using namespace std;

vector<int> shuffleArray(vector<int> &nums, int n)
{
    const int end = nums.size() - 1;
    for (int i = 0, j = 0; j < end; ++i, j += 2)
    {
        nums[j] |= static_cast<uint32_t>(nums[i]) << 16;
        nums[j + 1] |= static_cast<uint32_t>(nums[i + n]) << 16;
    }
    for (int &n : nums)
        n >>= 16;
    return nums;
}
