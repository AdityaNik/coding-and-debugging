from typing import List


def merge(input_str):
    stack = []
    ans = 0

    for chars in input_str:
        if chars == "(":
            stack.append(chars)
        else:
            if len(stack) != 0:
                last_char = stack[-1]
                if last_char == "(":
                    stack.pop()
                    ans += 2

    print(ans)


merge("(()))(")
