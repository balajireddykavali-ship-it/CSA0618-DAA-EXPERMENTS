
#include <stdio.h>

// Iterative exponentiation: O(n)
long long iterativePower(int x, int n)
{
    long long result = 1;

    for (int i = 0; i < n; i++)
        result *= x;

    return result;
}

// Recursive fast exponentiation: O(log n)
long long fastPower(int x, int n)
{
    if (n == 0)
        return 1;

    long long half = fastPower(x, n / 2);

    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main()
{
    int x = 2, n = 10;

    printf("Iterative result: %lld\n",
           iterativePower(x, n));

    printf("Recursive fast power result: %lld\n",
           fastPower(x, n));

    return 0;
}

