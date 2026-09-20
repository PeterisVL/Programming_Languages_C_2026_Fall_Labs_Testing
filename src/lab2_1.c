#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    // TODO: implement sum with a for loop
    int sum = 0;
    int val;
    
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the %d position number: ", i);
        scanf("%d", &val);
        sum = sum + val;
    }
    return sum; // placeholder
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    while (n < 1) {
        printf("Error: n must be a positive integer.\n Input a positive integer n: ");
        scanf("%d", &n);
    }
    int result = sum_to_n(n);

    printf("The sum result is: ");
    printf("%d", result);
    printf("\n");
    // TODO: validate input, call function, and print result

    return 0;
}
