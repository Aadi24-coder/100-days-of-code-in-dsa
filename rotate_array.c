#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle k greater than n

    // Print from index (n-k) to end, then from 0 to (n-k-1)
    for (int i = n - k; i < n; i++)
        printf("%d ", arr[i]);

    for (int i = 0; i < n - k; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int k;
    scanf("%d", &k);

    rotateArray(arr, n, k);

    return 0;
}
