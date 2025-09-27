// Q8 (C++ –  Language  ): Given an integer array nums, find the maximum sum of a contiguous subarray using Kadane’s Algorithm. Input format: the first line contains an integer n, and the second line contains n space-separated integers. Output format: print the maximum subarray sum. Constraints: 1 ≤ n ≤ 10^5 and -10^4 ≤ nums[i] ≤ 10^4. Example: Input: 9 and -2 1 -3 4 -1 2 1 -5 4, Output: 6.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(const vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
