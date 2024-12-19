#include<stdio.h>
int main()
{int i,n,sum=0;
printf("give input:");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+ncr(n,i);
printf("the sum is %d\n",sum);
getch();
return 0;

}

int ncr(int a,int b)
{int temp;
temp=fact(a)/fact(b)/fact(a-b);
getch();
return temp;}

int fact(int c)
{
    int j,f=1;
    for(j=1;j<=c;j++);
    f=f*j;
    getch();
return f;}
