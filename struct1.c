#include<stdio.h>
#include<string.h>
 typedef struct student      //    DATATYPE DEFINITION .structure is user defined datatype in c.it stores multiple types gf data.
{char sec;
int id;
int marks;
char name[50];
} stud;       //we have used here typedef fun. to give new and convenient name to the structure.this is the only function of typedef.
stud aman,ashu,chris;//globally declared  structure and data inside  it can be accessed anywhere.
void print()
{
    printf("marks of ashu is %d",ashu.marks);
}

main()
{  //DECLARING VARIABLES OF THE DATATYPE.
aman.sec='a';
aman.id=1;
aman.marks=80;
ashu.sec='h';
ashu.id=2;
ashu.marks=99;
chris.sec='c';
chris.id=3;
chris.marks=95;
strcpy(ashu.name,"ashutosh kumar yadav");
printf("ashu is from %c section and his  id is  %d .he scored %d marks .his full  name is %s.\n",ashu.sec,ashu.id,ashu.marks,ashu.name);
printf("aman is from %c section and his  id is  %d .he scored %d marks.\n",aman.sec,aman.id,aman.marks);
printf("chris is from %c section and his  id is  %d .he scored %d marks.\n",chris.sec,chris.id,chris.marks);

print();
}


