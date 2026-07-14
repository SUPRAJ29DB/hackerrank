# [Maximum subarray sum 2](https://www.geeksforgeeks.org/problems/maximum-subarray-sum--110820/1)
## Hard
You are given an array arr[] of integers and two integers a and b, You have to find the maximum possible sum of a contiguous subarray whose length is at least a and at most b.
Examples:
Input:&nbsp;arr[] = [4, 5, -1, -2, 6], a = 2, b = 4Output: 9Explanation: The subarray [4, 5] has length 2 and sum 9, which is the maximum among all subarrays of length between 2 and 4.
Input:&nbsp;arr[] = [-1, 3, -1, -2, 5, 3, -5, 2, 2], a = 3, b = 5Output:&nbsp;8Explanation:&nbsp;The subarray [3, -1, -2, 5, 3] has length 5 and sum 8, which is the maximum among all subarrays of length between 3 and 5.
Constraints:1 ≤ arr.size() ≤ 105-105 ≤ arr[i] ≤ 1051 ≤ a ≤ b ≤ arr.size()