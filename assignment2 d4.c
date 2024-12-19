/*#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int coef;
    int exp;
    struct node *next;
} s;
void main()
{int n;
  printf("enter the no . of terms in  polynomial\n");
  scanf("%d",&n);
   s *head=(s*)malloc(sizeof(s));
   head->coef=8;
   head->exp=6;
   head->next=0;
   s *ptr=head;

   printf("enter the coefficients and exponent of each  term:\n");
   for(int i=1;i<n;i++)
   {
       s *newnode=(s*)malloc(sizeof(s));
       scanf("%d",&(newnode->coef));
       scanf("%d",&(newnode->exp));
       newnode->next=0;
       ptr->next=newnode;
       ptr=ptr->next;
    }
    ptr=head;
    printf("the polynomial is:\n");
    while(ptr!=0)
    {printf("%dx^%d+",ptr->coef,ptr->exp);
    ptr=ptr->next;}
}*/


///adding two polynomials using linked list

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int coef;
    int exp;
    struct node *next;
}s;
void main()
{
    int m,n;
    printf("enter the no. of terms in poly1 & poly2:\n");
    scanf("%d%d",&m,&n);
    s *head1=(s*)malloc(sizeof(s));
    s *head2=(s*)malloc(sizeof(s));
    head1->coef=2;
    head1->exp=7;
    head1->next=0;
    head2->coef=5;
    head2->exp=5;
    head2->next=0;

    s *ptr1,*ptr2;
    ptr1=head1;
    ptr2=head2;
    printf("enter the coefficients and exponent of 1st polynomial:\n");
    for(int i=1;i<m;i++)
    {
        s *newnode1=(s*)malloc(sizeof(s));
        scanf("%d%d",&(newnode1->coef),&(newnode1->exp));
        newnode1->next=0;
        ptr1->next=newnode1;
        ptr1=ptr1->next;
    }

    printf("enter the coefficients and exponent of 2nd polynomial:\n");
    for(int i=1;i<n;i++)
    {
        s *newnode2=(s*)malloc(sizeof(s));
        scanf("%d%d",&(newnode2->coef),&(newnode2->exp));
        newnode2->next=0;
        ptr2->next=newnode2;
        ptr2=ptr2->next;
    }

    ptr1=head1;
    printf("the  1st polynomial is:\n");
    while(ptr1!=0)
    {printf("%dx^%d+",ptr1->coef,ptr1->exp);
    ptr1=ptr1->next;}

   ptr2=head2;
    printf("\n the 2nd polynomial is:\n");
    while(ptr2!=0)
    {printf("%dx^%d+",ptr2->coef,ptr2->exp);
    ptr2=ptr2->next;}


   ptr1=head1;
   ptr2=head2;
   s *ptr3=0;
   head3=newnode3;
   while(ptr1!=0||ptr2!=0)
   {if(ptr1->exp>ptr2->exp)
   {///storing in newnode
       s *newnode3=(s*)malloc(sizeof(s));
       newnode3->next=0;
       ptr3=newnode3;
       ptr3->coef=ptr1->coef;
       ptr3->exp=ptr1->exp;
       ptr1=ptr1->next;

   }
  else if(ptr1->exp<ptr2->exp)
  {  ///storing in newnode
      s *newnode3=(s*)malloc(sizeof(s));
      newnode3->next=0;
      ptr3->next=newnode3;
      ptr3->coef=ptr2->coef;
       ptr3->exp=ptr2->exp;
       ptr2=ptr2->next;

  }
  else if(ptr2->exp==ptr1->exp)
  {  s *newnode3=(s*)malloc(sizeof(s));
     ptr3->next=newnode3;
     ptr3=newnode3;
     ptr3->coef=(ptr2->coef)+(ptr1->coef);
  ptr3->exp=ptr2->exp;
  ptr2=ptr2->next;
  ptr1=ptr1->next;
  }
  break;
}



///printing added polynomial
  ptr3=head3;
  while(ptr3!=0)
  {
    printf("%dx^%d+",ptr3->coef,ptr3->exp);
    ptr3=ptr3->next;
  }


}












































