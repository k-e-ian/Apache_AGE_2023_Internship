#include "recurrence.h"

/**
 * F_recursive - recurrence relation w/ dynamic approach
 * @n: non-negative n'th term
 * 
 * Dynamic Programming Approach:
 * Advantages:
 *          Efficient computation with linear time complexity.
 *          Avoids redundant calculations by storing and reusing previously computed values.
 *          Improved performance for larger values of n compared to the recursive approach.
 * Disadvantages:
 *          Requires additional memory to store the dynamic programming table.
 * Time Complexity: O(n)
 * Space Complexity: O(n) (due to the additional memory for the dynamic programming table)
 * 
 * Return: value after dynamic approach
*/
int F_dynamic(int n) {
    int* dp = (int*)malloc((n + 1) * sizeof(int));
    int i, result;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (i = 3; i <= n; i++)
        dp[i] = dp[i - 3] + dp[i - 2];

    result = dp[n];
    free(dp);

    return result;
}