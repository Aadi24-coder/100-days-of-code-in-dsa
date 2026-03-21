#include<stdio.h>
int main()
{
    int n;
    int arr[100];
    printf("enter the length of the array : ");
    scanf("%d",&n);
    printf("enter elements in the array : " );
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i =0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else{
            min=arr[i];
        }
    }
    printf("the max number in the array is : %d \n",max);
    printf("the minimum number in the array is : %d \n",min);
    return 0;

}