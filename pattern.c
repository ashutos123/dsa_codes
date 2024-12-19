#include<stdio.h>
void main()/*printing pattern of an equilateral triangle*/
{int i,j,h,k;
printf("please,enter the height of triangle:");
scanf("%d",&h);
for(i=1;i<=h;i++)
{for(k=1;k<=h-i;k++)
printf(" ");
for(j=1;j<=i;j++)
printf("%c ",24);
printf("\n");}
}

