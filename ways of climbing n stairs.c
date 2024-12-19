#include<stdio.h>
int main()   //finding number of ways of climbing nth stair in set of 1 or 2 stairs.
 {int n;
 printf("enter the number of stairs to be climbed");
 scanf("%d",&n);

 printf("the no. of ways of climbing the %d stairs is %d ",n,ways(n));

 }


 int ways(int a)
 {if(a==1)
 return 1;
 else
 if (a==2)
 return 2;
 else
 return(ways(a-1)+ways(a-2));
 }















































