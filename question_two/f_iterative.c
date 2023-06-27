#include "recurrence.h"

/**
 * F_recursive - recurrence relation w/ iterative approach
 * @n: non-negative n'th term
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