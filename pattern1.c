#include<stdio.h>
void main()
{int i,j,k,h,g;
printf("please ,enter the height of triangle:");
scanf("%d",&h);
for(i=0;i<=h;i++)
{for(k=0;k<i;k++)
printf(" ");
for(j=1;j<=h-i;j++)

printf("%d ",g=j%2);
printf("\n");}

}
