import java.util.*;

class binaryCodeSequence {

    public static void main(String[] ar) {
        int nums[] = { 3, 0, 1 };
        binaryCodeSequence(nums);
    }

    public static void binaryCodeSequence(int[] nums) {
        Arrays.sort(nums);
        boolean check = false;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i) {
                System.out.println("Missing number: " + i);
                check = true;
            }
        }
        if (!check) System.out.println("All numbers are present");
    }
}
