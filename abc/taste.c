
#include<stdio.h>


int main()
{int n;

printf("enter the number to find  factorial of");

scanf("%d",&n);

printf("the factorial of %d is %d",n,fact(n));

return 0;
}


//function definition
//recursion defined

int fact(int a)
{
    if(a==1||a==0)
return 1;

else
    return(a*fact(a-1));

}
