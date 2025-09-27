# Q3 (Python – Language): Given a number n, check if it is an Armstrong number. A number is Armstrong if the sum of its digits raised to the power of the number of digits equals the number itself. Input format: a single integer n. Output format: print "YES" if it is an Armstrong number, otherwise "NO". Constraints: 1 ≤ n ≤ 10^9. Example: Input: 153, Output: YES.


def is_armstrong_number(n):
    num_str = str(n)
    num_digits = len(num_str)

    sum_of_powers = sum(int(digit) ** num_digits for digit in num_str)

    return sum_of_powers == n


def main():
    n = int(input())

    if is_armstrong_number(n):
        print("YES")
    else:
        print("NO")


main()
