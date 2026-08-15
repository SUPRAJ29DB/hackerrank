# [Lucas Number](https://www.geeksforgeeks.org/problems/lucas-number4515/1?page=1&category=Dynamic%20Programming&difficulty=Basic,Easy&sortBy=submissions)
## Easy
A Lucas Number is a number which is represented by the following recurrenceLn&nbsp;= Ln-1&nbsp;+ Ln-2&nbsp;for n&gt;1L0&nbsp;= 2L1&nbsp;= 1
Given a number n, find the nth lucas number.
Note:&nbsp;Since the output may be very large calculate the answer&nbsp;modulus 10^9+7.
Examples:
Input: n = 5
Output: 11
Explanation: L3 + L4 = L5, L3 = 4 and L4 = 7
Input: n= 7
Output: 29
Explanation: L5&nbsp;+ L6&nbsp;= L7, L5 = 11 and L6 = 18
Constraints:1 &lt;= n &lt;= 106