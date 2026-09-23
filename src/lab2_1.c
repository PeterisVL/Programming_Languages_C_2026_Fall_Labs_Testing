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

  for (int i = 1; i <= n; i++) {
    printf("Enter the %d position number: ", i);
    scanf("%d", &val);
    sum = sum + val;
  }
  return sum;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);

  while (n < 1) {
    printf("N must be more or equal to 1: ");
    scanf("%d", &n);
  }

  int res = sum_to_n(n);
  // TODO: validate input, call function, and print result
  printf("Result is %d\n", res);

  return 0;
}
