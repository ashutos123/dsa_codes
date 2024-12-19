#include<stdio.h>
void main()
{int i,j,n,m;
printf("enter the no. of rows and cols:");
scanf("%d%d",&n,&m);
for(i=1;i<n;i++)
{for(j=1;j<m;++j)
printf("o");
printf("\n");}
}
