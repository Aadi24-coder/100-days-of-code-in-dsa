#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int left = 0, right = n - 1;
    int a = arr[left], b = arr[right];
    int minSum = abs(arr[left] + arr[right]);

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (abs(sum) < minSum) {
            minSum = abs(sum);
            a = arr[left];
            b = arr[right];
        }

        if (sum < 0)
            left++;        // Sum too negative, move left pointer right
        else if (sum > 0)
            right--;       // Sum too positive, move right pointer left
        else
            break;         // sum == 0, can't get closer to zero
    }

    printf("%d %d\n", a, b);

    return 0;
}