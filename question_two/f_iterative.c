#include "recurrence.h"

/**
 * F_recursive - recurrence relation w/ iterative approach
 * @n: non-negative n'th term
 * 
 * Iterative Approach:
 * Advantages:
 *      Efficient computation and faster execution compared to the recursive approach.
 *      Avoids redundant calculations and eliminates function call overhead.
 * Disadvantages:
 *      Requires a loop to iterate from 3 to n, resulting in a linear time complexity.
 * Time Complexity: O(n)
 * Space Complexity: O(1) (constant space usage)
 * 
 * Return: value after iterative approach
*/
int F_iterative(int n) {
    int a = 0, b = 1, c = 2;
    int i, next;

    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;

    for (i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = c;
        c = next;
    }

    return next;
}