#include<stdio.h>

int main()
{
    int n, row, col;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ", col*row);
        }
        printf("\n");
    }
    return 0;
}
