#include <stdio.h>
int main()
{
    int a[100][100];
    int row,column;
    printf("enter rows and columns ");
    scanf("%d %d",&row,&column);
    if(row!=column)
    {
        printf("matrix is not symetric ");
        return 0;
    }
    printf("enter elements in the matrix ");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag){
        printf("symetic matrix ");
    }
    else{
        printf("it is not a symetric matrix");
    }

    
}