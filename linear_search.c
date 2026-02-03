#include<stdio.h>
int main()
{
    int n;
    int found = 0;
    int comparisons = 0;
    int arr[100];
    int key;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        comparisons++;           // count comparison
        if(arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}
