#include <stdio.h>

long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Iterative Factorial = %lld\n", factorialIterative(n));
    printf("Recursive Factorial = %lld\n", factorialRecursive(n));

    return 0;
}
