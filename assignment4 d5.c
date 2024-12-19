#include<stdio.h>
#include<string.h>

int main()
{
    char s[]="fnsnfd";
    int l;
    l=strlen(s);
    printf("%s\n",s);
    //printf("%d\n",l);

    if(fun(s,0,l-1)==1)
        printf(" string is palindrome");
    else
        printf("string is not palindrome");

return 0;
}
int fun(char s[],int i,int j)
{
    if(i>=j)
        return 1;
    else
        if(s[i]!=s[j])
        return 0;
    else
    {i++;
    j--;
        return fun(s,i,j);}


}
