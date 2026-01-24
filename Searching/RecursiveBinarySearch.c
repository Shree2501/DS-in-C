#include <stdio.h>

int binarySearch(int a[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (key == a[mid]) {
        return mid;
    } else if (key < a[mid]) {
        return binarySearch(a, low, mid - 1, key);
    } else {
        return binarySearch(a, mid + 1, high, key);
    }
}

int main() {
    int a[5], key;
    int n = 5;

    printf("Enter 5 sorted elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    int result = binarySearch(a, 0, n - 1, key);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
