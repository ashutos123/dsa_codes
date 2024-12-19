#include<stdio.h>
void main()
{
    int n,N,*ptr;
    printf("enter the order of the matrix :");
    scanf("%d",&n);
    N=n*(n+1)/2;
    ptr=(int*)malloc(sizeof(int));
    printf("enter the non zero elements of lower triangular SM :");
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {

     if(i>=j)
    scanf("%d",(ptr+(i*(i-1)/2+j-1)));}

    ///displaying the elements

    printf("the elements of the lower triangular SM are :\n");
    for(int i=1;i<=n;i++){
            printf("|");
    for(int j=1;j<=n;j++)

      {

        if(i>=j)
            printf("  %d ",*(ptr+(i*(i-1)/2+j-1)));

            else
            printf(" 0 ");}

    printf("|\n");}
}
