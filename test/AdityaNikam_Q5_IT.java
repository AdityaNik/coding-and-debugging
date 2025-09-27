// Q5 (Java – Language): Write a program to check whether a given string is a palindrome, considering only alphanumeric characters and ignoring cases. Input format: a single line string. Output format: print "YES" if the string is a palindrome, otherwise print "NO". Constraints: 1 ≤ length ≤ 200000. Example: Input: A man, a plan, a canal: Panama, Output: YES.

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String cleanedInput = input
            .replaceAll("[^a-zA-Z0-9]", "")
            .toLowerCase();
        String reversedInput = new StringBuilder(cleanedInput)
            .reverse()
            .toString();
        if (cleanedInput.equals(reversedInput)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
