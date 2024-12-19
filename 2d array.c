#include<stdio.h>                       ///addition of matrix

void main()
{int i,j,p,q,r,s;

printf("enter the dimensions of matrix:");
scanf("%d%d",&i,&j);
int a[i][j];int b[r][s];int c[i][s];

printf("enter the elements of matrix a:");
for(p=0;p<i;p++)
for(q=0;q<j;q++)
scanf("%d",&a[p][q]);
printf("matfrix a is:\n");
for(p=0;p<i;p++)
{for(q=0;q<j;q++)
printf(" %d ",a[p][q]);printf("\n");}
printf("enter the elements of matrix b:");
for(p=0;p<r;p++)
for(q=0;q<s;q++)
scanf("%d",&b[p][q]);
printf("mtrix b is:\n");
for(p=0;p<r;p++)
{for(q=0;s<j;q++)
printf(" %d ",b[p][q]);printf("\n");}

for(p=0;p<i;p++)
for(q=0;q<j;q++)
c[p][q]=a[p][q]+b[p][q];
printf("the addition of two matrices a&b is:\n");

for(p=0;p<i;p++)
{for(q=0;q<j;q++)
printf(" %d ",c[p][q]);
printf("\n");}


}
