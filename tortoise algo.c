
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
   int data;
   struct node*next;
}a;


void main()
{int n;
    printf("enter the no . of elements of linked list\n");
    scanf("%d",&n);
   a *head=(a*)malloc(sizeof(a));
   printf("enter the elements of linked list:\n");
   scanf("%d",&(head->data));
   head->next=NULL;
   a*ptr=(a*)malloc(sizeof(a));
   ptr=head;



   for(int i=1;i<n;i++)
   {a *newnode=(a*)malloc(sizeof(a));
    scanf("%d",&(newnode->data));
    newnode->next=NULL;
    ptr->next=newnode;
    ptr=ptr->next;

    }
    ptr=head;
     printf("items of linked list are \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }
     ptr=head;
  a *p1,*p2,*p3;
  p1=ptr;p2=ptr;p3=ptr->next;
  while(p2!=NULL||p3!=NULL)
  {
     p1=p1->next;
     p2=p3->next;
     p3=p2->next;
  break;
  }

printf("the element at mid is %d",p1->data);
}



