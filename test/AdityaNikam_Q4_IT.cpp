// Q4 (C++ – Language): Write a program to find the longest common prefix string among an array of strings; if there is no common prefix, return an empty string "". Input format: the first line contains an integer n (number of strings), followed by n strings. Output format: print the longest common prefix string. Constraints: 1 ≤ n ≤ 200 and 1 ≤ length of each string ≤ 200. Example: Input: 3 and flower flow flight, Output: fl.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    cout << "longestCommonPrefix is: " << longestCommonPrefix(strs) << endl;
    return 0;
}
