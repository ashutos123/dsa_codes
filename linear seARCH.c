#include<stdio.h>
void main()
{int a[10]={2,3,5,5,5,6,5,7,9,10},i,n,count=0;
printf("please enter the number to be found:");
scanf("%d",&n);
for(i=0;i<=9;i++)
if(n==a[i])
count++;
printf("the frequency of number is %d",count);

}
