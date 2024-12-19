
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
    scanf("%d",(ptr+(j*(j-1)/2+i-1)));}   ///address of colunm major order

    ///displaying the elemnts

    printf("the elements of the lower triangular SM are :\n");
    for(int i=1;i<=n;i++){
            printf("|");
    for(int j=1;j<=n;j++)

      {

        if(i>=j)
            printf("  %d ",*(ptr+(j*(j-1)/2+i-1)));

            else
            printf(" 0 ");}

    printf("|\n");}
}
