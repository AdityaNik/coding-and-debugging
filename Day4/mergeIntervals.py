from typing import List


def merge(intervals: List[List[int]]) -> List[List[int]]:
    ans = []

    sorted(intervals, key=lambda x: x[0])

    for list in intervals:
        if len(ans) == 0:
            ans.append([list[0], list[1]])

        else:
            last_ele = ans[-1]
            if last_ele[1] >= list[0]:
                new_second = max(last_ele[1], list[1])
                last_ele[1] = new_second
            else:
                ans.append([list[0], list[1]])

    print(ans)


merge([[1, 3], [2, 6], [8, 10], [15, 18]])
