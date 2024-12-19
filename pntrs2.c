#include<stdio.h>
 void main()
 {int a,b;
 a=23;b=45;
 swap(&a,&b);
 printf("\n a=%d,b=%d",a,b);

 }

 void swap(int *p1,int *p2);
 {int temp;
 temp=*p1;
 *p1=*p2;
    *p2=temp;

    }
