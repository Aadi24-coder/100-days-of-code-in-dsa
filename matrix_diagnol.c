#include <stdio.h>

int main() {
    int m, n, sum = 0;
    printf("enter rows and columns of matrix ");
    scanf("%d %d", &m, &n);
    printf("enter matrix elements ");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            if(i == j)
                sum += x;
        }
    }

    printf("%d", sum);
    return 0;
}