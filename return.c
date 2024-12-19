#include<stdio.h>
int main()
{
int result;
result=add(10,47);
printf("the result is %d",result);
getch();
return 0;
}

int add(int a,int b){

int temp;
temp=a+b;
return temp;
}
