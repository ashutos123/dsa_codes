#include<stdio.h>
struct node
{
    int data;
    struct node *next;

};
void main()
{
   push(3);
   push(4);
   push(5);
   push(6);
   push(9);
   display();
   peek();
   pop();
   printf("items of stack after pop\n");
   display();
}
struct node *top=NULL;
void push(int x)
{  //printf("enter data ");
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=x;
  newnode->next=top;
  top=newnode;

}
//display
struct node *top1=NULL;
void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
        printf("empty");
    else
        while(temp!=0)
        {printf("%d\n",temp->data);
    temp=temp->next;}
}

void peek()
{
    if(top==0)
    printf("empty\n");
    else
    printf("the top element is %d\n",top->data);

}

void pop()
{
    struct node  *temp;
    temp=top;
    if(top==0)
        printf("underflow");
    else
    {
        printf("%d\n",top->data);
        top=top->next;
        free(temp);
    }
}
