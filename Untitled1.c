#include<stdio.h>
void main()

{
    int x, y;
    printf( "enter two numbers to be exchanged:");
    scanf("%d%d",&x,&y);
    printf("m1:x=%d,y=%d\n",x,y);
    interchange(x,y);
}


void interchange(int x,int y)//interchanging the two numbers with each other
{

    int temp;
    printf("f1:x=%d,y=%d\n",x,y);
    temp=x;x=y;y=temp;
    printf("f2:x=%d,y=%d\n",x,y);
}
