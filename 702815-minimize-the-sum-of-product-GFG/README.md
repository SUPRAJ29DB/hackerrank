# [Minimize the sum of product](https://www.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/1?page=3&category=Sorting&sortBy=submissions)
## Easy
Given two arrays a[] and b[] of size n containing positive integers. Rearrange the elements of both arrays so that the value of: a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1] becomes minimum. Each element of a[] and b[] must be used exactly once.
Examples:
Input: a[] = [3, 1, 1], b[] = [6, 5, 4]
Output: 23
Explanation: After rearranging: a[] = [1, 1, 3] and b[] = [6, 5, 4]. Minimum sum = (1 * 6) + (1 * 5) + (3 * 4) = 6 + 5 + 12 = 23.
Input: a[] = [6, 1, 9, 5, 4] , b[] = [3, 4, 8, 2, 4]
Output: 80
Explanation: After rearranging: a[] = [1, 4, 5, 6, 9] and b[] = [8, 4, 4, 3, 2]. Minimum sum = (1 * 8) + (4 * 4) + (5 * 4) + (6 * 3) + (9 * 2) = 8 + 16 + 20 + 18 + 18 = 80.
Constraints:1 ≤ n ≤ 1031 ≤ ai , bi ≤ 103