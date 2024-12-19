#include<stdio.h>

void main()
{int i,n,sum=0,j;
printf("input n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+ncr(n,i);
printf("result:%d\n",sum);}
//defining ncr
int ncr(int a, int b)
{
    return fact(a)/ (fact(b)*fact(a-b));

}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              }
//defining factorial
int fact(int c)
{int t=1;
for(j=1;j<=c;j++)

return t*j;}
