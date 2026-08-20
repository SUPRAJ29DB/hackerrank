# [Minimum Integer](https://www.geeksforgeeks.org/problems/minimum-integer--170647/1)
## Easy
You are given an array arr&nbsp;of size&nbsp;n. Let us denote&nbsp;s&nbsp;as the sum of all integers present in the array. Among all integers present in the array, find the minimum integer&nbsp;x&nbsp;such that s ≤ n*x.
Examples:
Input: n = 3, arr = [1, 3, 2]
Output: 2
Explanation:
Sum of integers in the array is 6.
since 6 ≤ 3*2, therefore 2 is the answer.

Input: n = 1, arr = [3]
Output: 3
Explanation:
3 is the only possible answer
Constraints:1 ≤&nbsp; arr.size() ≤ 1051 ≤&nbsp; arr[i] ≤ 109