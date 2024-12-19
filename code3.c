#include<stdio.h>
main()/*comparing three numbers */
{int a,b ,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
if (b>c)
printf("the largest number is %d",a);
else
if(a>c)
printf("the largest number is %d",a);
else
printf("the largest number is %d",c);
else
if(b>c)
printf("the largest no. is %d",b);
else
printf("the largest number is %d",c);
}
