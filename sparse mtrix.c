#include <stdio.h>
#include<stdlib.h>
int main()
{
    int r, c, *ptr;
    printf("enter the size of rows and columns of matrix :");
    scanf("%d%d", &r, &c);
    ptr = (int *)malloc((r * c) * sizeof(int));
    printf("enter the elements of sparse matrix :");
    for (int i = 1; i <= r * c; i++)
        scanf("%d", (ptr + i - 1));
    printf("the elements of the sparse matrix are :");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
            printf("%d ,", *(ptr + c * (i - 1) + (j - 1)));
    }
    printf("\n ");

    printf("the non zero elemnts of the array are :");
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
        {
            if (*(ptr + c * (i - 1) + (j - 1)) != 0)
                printf("\n%d %d %d", i, j, *(ptr + c * (i - 1) + (j - 1)));
        }
    printf("\n");

return 0;
}
