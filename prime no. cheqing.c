#include<stdio.h>
void main()/*cheqing if a number is prime*/
{int a,b=2,k;
printf("enter the number:");
scanf("%d",&a);
//prime(int a)
//int b=2;
while(b<a)
{
    if(a%b==0)
    {printf("%d is not a prime number\n ",a);
        break;}
        b++;}
        printf("%d is a prime number\n",a);

}





