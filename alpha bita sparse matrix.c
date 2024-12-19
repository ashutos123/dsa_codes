///alpha is 3 and bita  is 2,accordiingly the no. of elements will change n-2+n-1+n+n-1+n-2

#include<stdio.h>
void main()
{
    int n,N,*ptr;
    printf("enter the order of the matrix :");
    scanf("%d",&n);
    N=5*n-6;
    ptr=(int*)malloc(N*sizeof(int));
    printf("enter the non zero elements of  alpha-beta SM :");
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {

     if(i==j||i==j-1||i==j+1||i==j-2||i==j+2)
    scanf("%d",(ptr+(2*i+j-3)));}

    ///displaying the elements

    printf("the elements of the  alpha-beta SM are :\n");
    for(int i=1;i<=n;i++){
            printf("|");
    for(int j=1;j<=n;j++)

      {

        if(i==j || i==j-1 || i==j+1 ||i==j-2||i==j+2)
            printf("  %d ",*(ptr+(2*i+j-3)));


            else
            printf(" 0 ");}

    printf("|\n");}
}
