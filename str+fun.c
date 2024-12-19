#include<stdio.h>
#include<string.h>

 int main()
{char list[6][10]={"aman","ashu","aritra","ansh","raj","hritik"};
  char name[10];int i,r,n,f;
  printf("enter the name of the user:\n");
  gets(name);
  for(i=0;i<6;i++)
  r=strcmp(name,list[i]);


 if(r==0)
  {printf("\n welcome %s!\n",name);


  printf("please enter the number whose factorial you want to find:\n");
  scanf("%d",&n);f=fact(n);
  printf("factorial of the number you entered is:%d\n",f);}
  else
    printf("user does not exist\n");


  getch();
  return 0;

  }

  int fact(int a)   //function definition
  {int s=1,j;
  for(j=1;j<=a;j++)
  s=s*j;

  return s;
  }
