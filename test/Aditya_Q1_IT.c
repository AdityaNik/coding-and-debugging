// Q1 (C – Language ) Problem: Second Largest Element in Array You are given an array of integers. Write a program to find the second largest element. If it doesn’t exist, print-1.Input Format: First line: integer n(size of array).Second line: n integers (array elements). Output Format: Print the second largest element, or-1if not possible.  Constraints:2 ≤ n ≤ 1000-10^5 ≤ arr [i] ≤ 10^5  Example Input:5 10 5 20 8 20  Example Output:10


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements you want: \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], second_max = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    printf("\nSeond Largest is: %d\n", second_max);
    return 0;
}
