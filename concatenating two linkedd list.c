#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*next;
};


void main()
{int n,m;
    printf("enter the no . of elements of first linked list\n");
    scanf("%d",&n);
   struct node *head1=(struct node*)malloc(sizeof(struct node));
   printf("enter the elements of  first linked list:\n");
   scanf("%d",&(head1->data));
   head1->next=NULL;
   struct node *ptr1=(struct node*)malloc(sizeof(struct node));
   ptr1=head1;
   for(int i=1;i<n;i++)
   {struct node *newnode1=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(newnode1->data));
    newnode1->next=NULL;
    ptr1->next=newnode1;
    ptr1=ptr1->next;
   }
   printf("enter the no . of elements of second linked list\n");
    scanf("%d",&n);
   struct node *head2=(struct node*)malloc(sizeof(struct node));
   printf("enter the elements of  second linked list:\n");
   scanf("%d",&(head2->data));
   head2->next=NULL;
   struct node *ptr2=(struct node*)malloc(sizeof(struct node));
   ptr2=head2;
   for(int i=1;i<n;i++)
   {struct node *newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(newnode->data));
    newnode->next=NULL;
    ptr2->next=newnode;
    ptr2=ptr2->next;
   }



    ptr1=head1;
     printf("items of  first linked list are \n");
     while(ptr1!=NULL)
     {
         printf("%d\n",ptr1->data);
         ptr1=ptr1->next;
     }

     ptr2=head2;
     printf("items of  second linked list are \n");
     while(ptr2!=NULL)
     {
         printf("%d\n",ptr2->data);
         ptr2=ptr2->next;
     }

   /*ptr1=head1;
    while(ptr1->next!=NULL)
    {
        ptr1=ptr1->next;
    }

    ptr1->next=head2;*/

    ///concatenating two sorted list in sorted manner
  ptr1=head1;
  ptr2=head2;
  struct node *s=NULL;
  struct node *newhead=NULL;
  if(ptr1->data<ptr2->data)
  {
      s=ptr1;
      ptr1=s->next;
  }
  else
    {s=ptr2;
  ptr2=s->next;}

  newhead=s;

  while(ptr1!=NULL ||ptr2!=NULL)
  {if(ptr1->data < ptr2->data)
  {s->next=ptr1;
  s=ptr1;
  ptr1=s->next;}
  else
    {s->next=ptr2;
    s=ptr2;
    ptr2=s->next;}
  }
  if(ptr1==NULL)
    s->next=ptr2;
  else
    //if(ptr2->next==NULL)
    s->next=ptr1;


  ///printing sorted merged list
  /*struct node*p=NULL;
  if(head1->data<head2->data)
        {p=head1;
  printf("concatenated soprted linked list is :\n");
  while(p!=NULL)
  {
      printf("%d\n",p->data);
      p=p->next;
  }}
   else

    {p=head2;
  printf("concatenated sorted linked list is :\n");
  while(p!=NULL)
  {
      printf("%d\n",p->data);
      p=p->next;
  }}*/


    printf("the concatenated list is:\n");


    while(newhead!=NULL)
    {
        printf("%d\n",newhead->data);
        newhead=newhead->next;

    }



}
