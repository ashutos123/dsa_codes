#include<stdio.h>
void main()/*reversing a number*/
{int n,m,r,rev_num=0;
printf("please,enter the number:");
scanf("%d",&n);
m=n;
while(n!=0)
{r=n%10;
n=n/10;
rev_num=rev_num*10+r;}
printf("The reverse number of %d  is %d",m,rev_num);
}
