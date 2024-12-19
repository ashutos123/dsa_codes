//#include<stdio.h>

//int main()
//{int n;

//printf("enter the number to find  sum f\n ");

//scanf("%d",&n);

//printf("the sum of %d is %d\n",n,sum(n));

//return 0;
//}


//function definition
//recursion defined

//int sum(int a)
//{
//    if(a==1)
//{return 1;//

//else
  //  {return(a+sum(a-1));}


//}
#include<stdio.h>

int main()
{int n;

printf("enter the number to find  factorial f\n ");

scanf("%d",&n);

printf("the sum of %d is %d\n",n,fact(n));

return 0;
}


//function definition
//recursion defined

int fact(int a)
{
    if(a==1)
{return 1;}

else
    {return(a*fact(a-1));}


}
