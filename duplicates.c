#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int k = 0;

    printf("enter the length of the array ");
    scanf("%d", &n);

    printf("enter the elements in the array ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(int j = 0; j < k; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0)
        {
            arr[k] = arr[i];
            k++;
        }
    }

    printf("array elements are : ");
    for(int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}