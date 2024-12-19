#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void main()
{  int n;
    printf("enter the no. of elements of stack\n");
  scanf("%d",&n);
  printf("enter data");
  for(int i=1;i<=n;i++)
    push();
/*printf("the elements of stack are\n");
for(int i=0;i<n;i++)
printf("%d\n",stack[i]);*/
peek();
printf("\n\n");
display();
pop();

}
void push(int a)
{
    //int x;

    //scanf("%d",&x);
    if(top==N-1)
        printf("overflow");
    else
        {top++;
    stack[top]=a;}

}
///peek
void peek()
{
    if(top==-1)
        printf("empty");
    else
    printf("%d",stack[top]);

}

///display
void display()
{
    int i;
    for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
}

