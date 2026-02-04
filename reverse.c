#include <Stdio.h>
int main()
{
    int n;
    printf(" enter length of the array : ");
    scanf("%d",&n);
    int arr[100];
    printf(" enter elements in the array : ");
    for(int i =0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    printf(" array is : ");
    for(int i =0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf(" reverse of the array is : ");
    for(int i=n-1;i>=0;i--)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}