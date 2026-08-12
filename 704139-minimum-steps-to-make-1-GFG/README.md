# [Minimum Steps to Make 1](https://www.geeksforgeeks.org/problems/minimum-steps-to-minimize-n-as-per-given-condition0618/1?page=1&category=Dynamic%20Programming&difficulty=Basic,Easy&sortBy=submissions)
## Easy
Given a number n, count minimum steps to minimize it to 1 using the following operations :

If n is divisible by 2 then you may reduce n to n/2.
If n is divisible by 3 then you may reduce n to n/3.
Decrement n by 1 (No condition for this)

Examples:
Input: n = 10
Output: 3
Explanation: 10 - 1 = 9 / 3 = 3 / 3 = 1

Input: n = 1
Output: 0
Explanation: n is 1
Constraints:1 ≤ n ≤ 104