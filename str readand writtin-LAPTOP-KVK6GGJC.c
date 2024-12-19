#include<stdio.h>
#include<string.h>a

void main()
{int i=0,count=0;char line[67];
printf("please enter the sentence:");
scanf("%[^\n]",line);
printf("the sentence is: \n%s",line);
while(line[i]!='\0')
  {

   count++;
i++;}

printf("\n length of string is %zu",strlen(line));
printf("\n string length is %d",count);

}
#include<stdio.h>
 main()
{
    char c[]="aman iS a bod man";//character countting without inbuit c functionds

    int i,j=0;
    i=0;
    while(c[i]!='\0')
   {

        j++;
    i++;}
    printf("%d",i);

}

