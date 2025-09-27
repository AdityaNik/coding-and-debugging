# Q10 (Python – Language): Design a data structure that follows the Least Recently Used (LRU) cache mechanism. Implement two operations: get(key) → returns the value if it exists, else -1; and put(key, value) → inserts or updates the value. Input format: the first line contains the cache capacity, followed by a sequence of operations (get x, put x y). Output format: for each get operation, print the corresponding value. Constraints: 1 ≤ capacity ≤ 1000 and number of operations ≤ 10^5. Example: Input: 2 and put 1 1 put 2 2 get 1 put 3 3 get 2, Output: 1 -1.


class LRUCache:
    def __init__(self, capacity):
        self.capacity = capacity
        self.cache = {}
        self.order = []

    def get(self, key):
        if key in self.cache:
            self.order.remove(key)
            self.order.append(key)
            return self.cache[key]
        return -1

    def put(self, key, value):
        if key in self.cache:
            self.order.remove(key)
        elif len(self.cache) == self.capacity:
            del self.cache[self.order.pop(0)]
        self.cache[key] = value
        self.order.append(key)


def __str__(self):
    return str(self.cache)
