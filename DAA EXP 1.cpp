#include <stdio.h>
int main() {
    int arr[100], n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Key found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Key not found\n");

    return 0;
}
