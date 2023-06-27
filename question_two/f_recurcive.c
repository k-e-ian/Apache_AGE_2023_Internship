#include "recurrence.h"

/**
 * F_recursive - recurrence relation w/ recurcive approach
 * @n: non-negative n'th term
 * 
 * Return: value after recurcive approach
*/
int F_recursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return F_recursive(n - 3) + F_recursive(n - 2);
}