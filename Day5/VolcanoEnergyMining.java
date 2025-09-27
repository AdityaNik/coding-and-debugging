class VolcanoEnergyMining {

    public static void main(String[] ar) {
        int nums[] = { -2, -1, -3, 4, -1, 2, 1, -5, 4 };

        mineVolcano(nums);
    }

    public static void mineVolcano(int nums[]) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.length; i++) {
            currentSum = Math.max(nums[i], currentSum + nums[i]);
            maxSum = Math.max(maxSum, currentSum);
        }

        System.out.println("Maximum sum of contiguous subarray: " + maxSum);
    }
}
