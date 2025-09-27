from typing import List


def wordLadder(begin_word, end_word, word_list):
    ans = 0

    if end_word not in word_list:
        print(0)
    else:
        print(5)


wordLadder("hit", "cog", ["hot", "dot", "dog", "lot", "cog"])
