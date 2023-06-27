#include "recurrence.h"

/**
 * main - prints a piecewise recurrence relation
 * F(n) = F(n-3) + F(n-2)
 * Return: 0
*/

int main(void) {
    int n;
    clock_t start, end;
    double cpu_time_used;
    int result_recursive;
    int result_iterative;
    int result_dynamic;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    /* Recursive approach */
    start = clock();
    result_recursive = F_recursive(n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Recursive: F(%d) = %d\n", n, result_recursive);
    printf("Time taken (Recursive): %f seconds\n\n", cpu_time_used);

    /* Iterative approach */
    start = clock();
    result_iterative = F_iterative(n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Iterative: F(%d) = %d\n", n, result_iterative);
    printf("Time taken (Iterative): %f seconds\n\n", cpu_time_used);

    /* Dynamic programming approach */
    start = clock();
    result_dynamic = F_dynamic(n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Dynamic: F(%d) = %d\n", n, result_dynamic);
    printf("Time taken (Dynamic): %f seconds\n\n", cpu_time_used);

    return 0;
}