#include <stdio.h>

void findFrequency(int arr[], int n) {
    int visited[n];
    
    // Initialize visited array with 0
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    printf("Element\t Frequency\n");
    printf("-------------------\n");

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)  // Skip already counted elements
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark as visited
            }
        }
        printf("%d\t %d\n", arr[i], count);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findFrequency(arr, n);

    return 0;
}