/*#include<stdio.h>
void main()
{
    int r,c,*ptr;
    printf("enter the number of rows and cols :");
    scanf("%d%d",&r,&c);
    printf("enter the elements of sparse matrix :");
    ptr=(int*)malloc((r*c)*sizeof(int));
    for( int i=1;i<=r*c;i++)

        scanf("%d",(ptr+(i-1)));
    printf("the sparse matrix is :");
    for(int i=1;i<=r;i++)
   for(int j=1;j<=c;j++)

{printf("%d ",*(ptr+(c*(i-1)+(j-1))));}
     printf("\n");
printf("the non zero elements are :\n");
for(int i=1;i<=r;i++)
   for(int j=1;j<=c;j++)
   {
       if(*(ptr+(c*(i-1)+(j-1)))!=0)
        printf(" \n %d %d %d", i,j,*(ptr+(c*(i-1)+(j-1))));
   }
    printf("\n");


}*/

#include<stdio.h>
void main()
{int n,*ptr,a=0;
printf("enter the size of 2-d array ");
scanf("%d",&n);
int N=n*(n+1)/2;
ptr=(int*)malloc(N*sizeof(int));

///reading non zero elements

for(int i=1;i<=n;i++){
 for(int j=1;j<=n;j++){
if(i>=j)
{
    printf("enter the (%d %d)th element :",i,j);
    scanf("%d",(ptr+(i*(i-1)/2)+(j-1)));

} }}
///displaying triangular sparse matrix
printf("the lower triangular sparse matrix is :\n");
    {for(int i=1;i<=n;i++){printf("|");
 for(int j=1;j<=n;j++)
if(i>=j)               ///here,changing comparison sign will make it upper triangular  matrixs
printf("\n %d ",*(ptr+(i*(i-1)/2)+(j-1)),a);
else
printf(" 0 ");
 }
printf(" |\n");}

}





























