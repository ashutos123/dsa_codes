#include<stdio.h>
#include<string.h>

int main()
{
    char s[]="dnsdskfn";
    int l;
    l=strlen(s);
    printf("%d\n",l);

    if(fun(s[],0,l-1)==1)
        printf("is palin");
    else
        printf("not palin");
    return 0;


}
int fun(char s[],int i,int j)
{
    if(i>=j)
        return 1;
    else if(s[i]!=s[j])
        return 0;
    else
        return =fun(s[],i++,j--);


}
