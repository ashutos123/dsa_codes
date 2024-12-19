///implementing tridiagonal sparse matrix

#include<stdio.h>
void main()
{
    int n,N,*ptr;
    printf("enter the order of the matrix :");
    scanf("%d",&n);
    N=3*n-2;
    ptr=(int*)malloc(N*sizeof(int));
    printf("enter the non zero elements of  tridiagonal SM :");
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {

     if(i==j||i==j-1||i==j+1)
    scanf("%d",(ptr+(2*i+j-3)));}

    ///displaying the elements

    printf("the elements of the  tridiagonal SM are :\n");
    for(int i=1;i<=n;i++){
            printf("|");
    for(int j=1;j<=n;j++)

      {

        if(i==j || i==j-1 || i==j+1)
            printf("  %d ",*(ptr+(2*i+j-3)));


            else
            printf(" 0 ");}

    printf("|\n");}
}
