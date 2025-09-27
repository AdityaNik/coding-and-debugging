// Q2 (Java – Language): Given an integer array nums of size n, return the majority element (the element that appears more than ⌊n/2⌋ times); if no such element exists, return -1. Input format: the first line contains an integer n and the second line contains n space-separated integers. Output format: print a single integer (the majority element or -1 if none exists). Constraints: 1 ≤ n ≤ 10^5 and -10^9 ≤ nums[i] ≤ 10^9. Example: Input: 7 and 2 2 1 1 1 2 2, Output: 2.

import java.util.*;

class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int n = scanner.nextInt();

        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        System.out.println(
            "majorityElement: " + Solution.majorityElement(nums)
        );
    }

    public static int majorityElement(int[] nums) {
        int count = 0;
        int candidate = null;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
}
