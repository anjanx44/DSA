import java.util.HashMap;
import java.util.Arrays; // Import the Arrays class

public class TwoSum {
    public static void main(String[] args) {
        int[] n = {2, 7, 11, 15};
        int target = 9;

        int[] ans = twoSum(n, target);

        // Print the result as a string
        System.out.println(Arrays.toString(ans)); // Print the array in a readable format
    }

    public static int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> numMap = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];

            if (numMap.containsKey(complement)) {
                return new int[]{numMap.get(complement), i};
            }
            numMap.put(nums[i], i);
        }

        throw new IllegalArgumentException("No two sum solution");
    }
}