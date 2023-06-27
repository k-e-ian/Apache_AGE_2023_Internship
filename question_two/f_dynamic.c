#include "recurrence.h"

/**
 * F_recursive - recurrence relation w/ dynamic approach
 * @n: non-negative n'th term
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