  #include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int i=0,j,l,h=0;
    printf("enter the string");
    scanf("%s",s);
    /*while(s[i]!='\0')
  {

   count++;
i++;}*/

l=strlen(s);

for(j=0;j<l;j++)
   {

    if(s[j]!=s[l-1-j])
        h=1;}
    if(h)
printf("not palin\n");
else
    printf("palin\n");

    return 0;
}
