#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    printf(" enter the length of the array : ");
    scanf("%d",&n);
    int posi;
    int value ;
    printf(" enter the elements in the array : ");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" array elements are : ");
    for(int i =0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    printf(" enter the index to insert the value : ");
    scanf("%d",&posi);
    printf("enter the value :  ");
    scanf("%d",&value);
    for(int i =n-1;i>=posi-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[posi-1]=value;
    n++;
    printf(" array after insertion is : ");
    for(int i =0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}