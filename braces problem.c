/*#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*next;
};


void main()
{int n;
    printf("enter the no . of elements of linked list\n");
    scanf("%d",&n);
   struct node *head=(struct node*)malloc(sizeof(struct node));
   printf("enter the elements of linked list:\n");
   scanf("%d",&(head->data));
   head->next=0;
   struct node *ptr=(struct node*)malloc(sizeof(struct node));
   ptr=head;



   for(int i=1;i<n;i++)
   {struct node *newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(newnode->data));
    newnode->next=0;
    ptr->next=newnode;
    ptr=ptr->next;

    }
    /*ptr=head;
     printf("items of linked list are \n");
     while(ptr!=0)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }*/
/*int count=0;
struct node *t=head;
struct node *p1=head;
struct node *p2=head->next;
while(p2!=0)
{
    if(p1->data==0 && p2->data==1)
    {
        while(t!=p1)
            {t=t->next;}
            t=p2->next;
            p1=t;
            p2=t->next;
            count+2;
    }

    else
    {
        p1=p2;
        p2=p2->next;
    }

}

t=head;int t1=0,t2=0;

while(t!=0)
{
    if(t->data==1)
        t1++;

    t=t->next;

}

while(t!=0)
{
    if(t->data==0)
        t2++;

    t=t->next;

}

if(t1>=t2)
    count=count+(t1-t2);
else
    count=count+(t2-t1);

printf("braces to be removed is %d",count);



}*/



/*#include<stdio.h>
void main()
{
    int a,*p,**q;
    a=10;
    p=&a;
    q=&p;

    printf("%d ,%d, %d ",a,*p,**q);
}*/

#include<stdio.h>
 typedef struct node
{
    int data;
    struct node *next;
}n;
void main()
{  printf("enter the no. of elements\n");
int t,x;
scanf("%d",&t);
   printf("enter the data");
   for(int i=0;i<t;i++ )
      {scanf("%d",&x);
    push(x);}

display();
}
n *top=0;
void push(int a)
 {

  n *newnode=(n*)malloc(sizeof(n));
  newnode->data=a;
  newnode->next=0;
  top=newnode;
 }
void display()
{
 n *tos;
 tos=top;
 if(tos==0)
        printf("empty\n");
 else
    {while(tos!=0)
    printf("%d",tos->data);
   tos=tos->next;
       }
}
































