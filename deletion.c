#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7, element, pos = -1;

    printf("Enter element to delete: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found\n");
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
