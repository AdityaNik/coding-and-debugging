import java.util.*;

class JungleHunt {

    public static void main(String[] args) {
        int nums[] = { 2, 7, 11, 15 };
        solve(nums, 9);
    }

    public static void solve(int nums[], int target) {
        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                System.out.println(
                    "Found pair: " + i + " and " + map.get(target - nums[i])
                );
                return;
            }
            map.put(nums[i], i);
        }
        System.out.println("No pair found");
    }
}
