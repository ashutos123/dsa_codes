#include<stdio.h>
void main()
{int i,j,sum=0,n,product=1;
printf("no. of natural  numbers is:");
scanf("%d",&n);
for(i=1;i<=n;i++)
   {
    sum=sum+i;
    product=product*i;}
printf("the sum of first %d natural numbers  is %d\n ",n,sum);
printf("the product of first %d natural numbers is %d\n",n,product);
}





