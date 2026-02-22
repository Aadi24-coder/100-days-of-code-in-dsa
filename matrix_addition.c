#include <stdio.h>

int main()
{
    int a[100][100];
    int b[100][100];
    int sum[100][100];
    int row1, column1;
    int rows2, column2;

    printf("enter rows and columns for matrix 1 ");
    scanf("%d%d", &row1, &column1);

    printf("enter rows and columns for matrix 2 ");
    scanf("%d%d", &rows2, &column2);

    if(row1 != rows2 || column1 != column2)
    {
        printf("Addition not possible");
        return 0;
    }

    printf("enter elements in the first matrix\n");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < column1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter elements in the second matrix\n");
    for(int i = 0; i < rows2; i++)
    {
        for(int j = 0; j < column2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < column1; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < column1; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}