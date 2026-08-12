# [Max Subarray Sum with Elements less than or equal to k](https://www.geeksforgeeks.org/problems/you-and-your-books/1?page=1&category=Dynamic%20Programming&difficulty=Basic,Easy&sortBy=submissions)
## Easy
Given an array arr[] and an integer k, the&nbsp;task is to find the maximum sum of a subarray such that every element in the chosen subarray is less than or equal to k.
Note:&nbsp;A subarray is a contiguous sequence of elements within an array.
Examples:
Input: k = 1, arr[] = [3, 2, 2, 3, 1, 1, 1, 3]Output: 3Explanation: Here, the valid subarray is [1, 1, 1], since all other elements are greater than 1. The sum of this subarray is 1 + 1 + 1 = 3, which is the maximum possible.
Input: k = 2, arr[] = [3, 2, 2, 3, 1, 1, 1, 3]Output: 4Explanation: Here, the valid subarrays are [2, 2] and [1, 1, 1]. Their sums are 4 and 3 respectively. Therefore, the maximum possible sum is 4, obtained from the subarray [2, 2].
Constraints:1 ≤ n ≤ 1051 ≤ k ≤ 1040 ≤ arr[i] ≤ 104