
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0)
    {
        printf("GCD is undefined for 0 and 0.\n");
        return 1;
    }

    result = gcd(a, b);

    printf("GCD = %d\n", result);

    return 0;
}

