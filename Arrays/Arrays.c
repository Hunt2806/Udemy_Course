#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp, key, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Sum & Average
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);

    // Max & Min
    int max = arr[0], min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Max = %d, Min = %d\n", max, min);

    // Reverse
    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Linear Search
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");

    return 0;
}