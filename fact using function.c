#include<stdio.h>
main()
{int n;
printf("Enter the number\n");
scanf("%d",&n);
factorial(n);

}

void factorial(int n)
{int i,fact=1;
for(i=1;i<=n;i++)
fact=fact*i;
printf("The factorial of %d is %d\n",n,fact);}
