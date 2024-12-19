/*#include<stdio.h>
void main()
{
    int src,dest;
    dest=10;
    src=1;
   reachhome(src,dest);

}
void reachhome(int src,int dest)
{    ///base case
    if(src==dest){
        printf("reached");
        return;}


     ///small calculation
        src++;
        printf("source %d -destination %d \n",src,dest);
        ///recursive call
        reachhome(src,dest);

}



#include<stdio.h>
int fib(int a)
{
///base case
if(a==1)           ///0,1,1,2,3,5,8,13,21.......fibonacci series index starts from 0th element.
return 1;
else
if(a==0)
return 0;///small calculation
else
///recursive call
return (fib(a-1)+fib(a-2));

}


int main()
{int n;
printf("enter the number whose fibonacci has to be found\n");
scanf("%d",&n);
printf("the fibonacci of %dth term is %d.\n",n,fib(n));

}*/



#include<stdio.h>
void main()
{
    int a[]={4,6,7,8,9,10};


     printf("%d \n",isSorted(a,6));
}

bool isSorted(int a[],int size)
{
    if(size==0||size==1)
       {return true;}


   if(a[0>a[1])
       {return false;}

    bool isSmallerSorted=isSorted(a+1,size-1);
    return isSmallerSorted;
}

























