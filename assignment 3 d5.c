#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//void push(int);
//int pop();
//void display();
int s[25]={0};
int top=-1;
int ch;

void main()
{
    char postfix[25]={'\0'},ele;
    int i,num1,num2,ans;
    printf("enter the postfix expression:");
    scanf("%s",postfix);
    printf("\n postfix expression:%s",postfix);
    i=0;
    while(i<=strlen(postfix)-1)
    {
        ele=postfix[i];
        if(isdigit(ele))
            push(ele-'0');
        else
        {
            num1=pop();
            num2=pop();
            switch(ele)
            {
            case'^':
                ans=pow(num2,num1);
                break;
                case'/':
                ans=num2/num1;
                break;
                case'*':
                    ans=num2*num1;
                    break;
                case'-':
                    ans=num2-num1;break;
                case'+':
                    ans=num2+num1;
                    break;

            }
            push(ans);
        }
        display();
        i++;
    }
    printf("\n ans=%d",pop());

}
///user defined function

void push()
{
    if(top==24)
    printf("\n stack is full");
    else
    {
        top++;
        s[top]=ele;

    }
  }

int pop()
{
    if(top==-1)
        printf("\n empty");
    else
    {
        ch=s[top];
        top--;

    }
    return ch;
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
        printf("|%d",s[i]);

}
















