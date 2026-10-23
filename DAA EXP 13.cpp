
#include <stdio.h>

int maxSubarraySum(int arr[], int n)
{
    int maxSoFar = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if (currentSum > maxSoFar)
            maxSoFar = currentSum;
    }

    return maxSoFar;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum subarray sum: %d\n",
           maxSubarraySum(arr, n));

    return 0;
}

