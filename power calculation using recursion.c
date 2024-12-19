/*#include<stdio.h>

 int main()
 {
     int m,n;
     printf("enter the value of base and power :\n");
     scanf("%d%d",&m,&n);


     printf("the value is %d",value(m,n));
     return 0;
 }
int value(int a,int b)
{
    if(b==0)
    return 1;
    else
    if(b==1)
    return a;

    int ans=value(a,b/2);

    if(b%2==0)
    return ans*ans;
    else
        if(b%2!=0)
    return a*ans*ans;

}*/

//iterative binary exponentiation
#include<stdio.h>
int main()
{
    int a=2,b=3;
    printf("%d \n",binexpiter(a,b));

}
int binexpiter(int a,int b)
{
    int ans=1;
    while(b>0)

{
    if(b%2!=0)
        ans=ans*a;
}
a=a*a;
b>>=1;
}





























