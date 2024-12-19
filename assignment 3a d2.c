#include<stdio.h>
void main()
{
    int n,N,*ptr;
    printf("enter the order of the matrix :");
    scanf("%d",&n);
    N=n*(n+1)/2;
    ptr=(int*)malloc(sizeof(int));
    printf("enter the non zero elements of upper triangular SM :");
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {

     if(j>=i)
    scanf("%d",(ptr+(i*(i-1)/2+j-1)));}

    ///displaying the elemnts

    printf("the elements of the upper triangular SM are :\n");
    for(int i=1;i<=n;i++)
    {printf("|");
    for(int j=1;j<=n;j++){

        if(j>=i)
            printf("  %d ",*(ptr+(i*(i-1)/2+j-1)));

            else
            printf(" 0 ");
    }
    printf("|\n");}
}
