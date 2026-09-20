#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
    long long sum_result = 1;
    for (long long i = 1; i <= n; i++)
    {
        sum_result = sum_result * i;
    }
    return sum_result; // placeholder
}

int main(void) {
    int n;
    long long factorial_result;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);
    while (n < 0) {
        printf("Error: n must be a positive integer.\n Input a positive integer n: ");
        scanf("%d", &n);
    }

    factorial_result = factorial(n);
    // TODO: validate input, call function, print result
    printf("The factorial result is: ");
    printf("%lld", factorial_result);
    printf("\n");
    // TODO: validate input, call function, and print result


    return 0;
}
