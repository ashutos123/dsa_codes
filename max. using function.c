#include<stdio.h>
int max(int,int,int);
int main()
{
int a,b,c;
printf("enter rhe integers:");
scanf("%d%d%d",&a,&b,&c);
printf("maximum is:%d\n",max(a,b,c));

return 0;
}

int max(int x,int y,int z)
{int m;
if(y>x &&y>z)
m=y;
else
if
(z>x && z>y)


m=z;
else
    m=x;
return m;}

