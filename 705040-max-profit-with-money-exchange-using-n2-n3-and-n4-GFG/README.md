# [Max Profit with Money Exchange using n/2, n/3, and n/4](https://www.geeksforgeeks.org/problems/ritikas-money4334/1?page=2&category=Dynamic%20Programming&difficulty=Basic,Easy&sortBy=submissions)
## Easy
Ritika has a coin worth n dollars.&nbsp; she can exchange any coin worth n at the bank into three separate coins worth n/2, n/3, and n/4 (each value rounded down, i.e., integer division). She keeps exchanging coins wherever it results in profit. 
Find the maximum total amount of money Ritika can end up with.
Examples:
Input: n = 5
Output: 5
Explanation: 5 =&gt; 5 / 2 + 5 / 3 + 5 / 4 = 2 + 1 + 1 = 4 (&lt; 5), so exchanging gives a loss. Hence, the maximum amount she can have is 5 itself (no exchange).

Input: n = 12
Output: 13
Explanation: 12 =&gt; 12 / 2 + 12 / 3 + 12 / 4 = 6 + 4 + 3 = 13 (&gt; 12), so she exchanges. None of 6, 4, or 3 can be exchanged further for profit. Hence, the maximum amount is 13.

Constraints:1 ≤ n ≤ 108