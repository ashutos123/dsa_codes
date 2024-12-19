#include<iostream>
#include<string.h>                             ///READ THE COMMENTS CAREFULLY!!!!
using namespace std;                         ///this code has two parts main and global.so read carefully.

class hero
{
    ///properties
private:
    int power;

public:
char level;

/// simple constructor
hero()
{
    cout<<"simple constructor called."<<endl;

}
///parametrized constructor
hero(int power,char level)
 {cout<<"this->"<<this<<endl;    ///"this"is a pointer to current OR LAST object created.
 this->power=power;              ///so it returns address of that object.
 this->level=level;               ///here, this returns address of ramesh.
cout<<"power is "<<power<<endl;  ///parameters of hero are assigned to power and level of ramesh.
cout<<"level  is "<<level<<endl;
 }
///user defined copy constructor
hero(hero& temp) ///parameter pass by reference,not by value(it will stuck in infinite loop)
{
    cout<<"copy constructor called"<<endl;
    this->power=temp.power;
    this->level=temp.level;
 cout<<"power is "<<power<<endl;
}

void print()
{
    cout<< level <<endl;
cout<< power <<endl;}

int getpower()
{return power;}

                     ///getter setter functions for calling private data members
char getlevel()
{return level;}

void setpower(int p)
{power=p;}
void setlevel(char ch)
{level=ch;}


///DESTRUCTOR CREATION:-
~hero()
{
    cout<<"destructor called"<<endl;
}





///STATIC DATA MEMBER
static int timetocomplete;

///STATIC DATA FUNCTION
static int random()
{
    return timetocomplete;

}






};



///static data member
int hero::timetocomplete=7;









int main()
{
   /* ///static allocation
    hero a;
    a.setpower(90);a.setlevel('A');
    cout<<"level is"<<a.level<<endl;
    cout<<"power is"<<a.getpower()<<endl<<endl;

    ///dynamically
    hero *b=new hero;
    (*b).setpower(80);b->setlevel('B');
    cout<<"level is"<<(*b).level<<endl;            ///(*)acts as dereference operator meaning it refers to the address of memory location assigned
    cout<<"power is"<<(*b).getpower()<<endl<<endl;          ///  to level or getpower function.b is a pointer variable which stores address of dynamically created object newhero.
     ///alternatively
      cout<<"level is"<<b->level<<endl;
    cout<<"power is"<<b->getpower()<<endl;     */


  ///what is constructor??
  ///it is a function with name same as that  of class.
  ///->whenever ,an object of a class is created ,a function is by default called with name as that of class.
  ///if that function is created with some return type,then that functon call will be shown in output,just after creating object of that class.
  ///this is called constructor.as an example:-
  /*hero a; //this mere obj creation  will call hero function and print "constructor called".
  hero *h=new hero; //dynamically
   ///parametrized constructor will be called.
  hero ramesh(10,'A');
  cout<<"address of ramesh is" <<&ramesh<<endl;*/

///NOTE:-WHEN USER CREATES constructor (any),then by default constructor made by compiler ,dies.

///COPY CONSTRUCTOR

hero s(30,'c');
//s.print();
///parameters of s are copied to r.
hero r(s);
//r.print();

///COPY ASSIGNMENT OPERATOR

hero hero1(24,'w');
hero hero2(35,'x');
hero1.print();
cout<<endl;
hero2.print();
hero1=hero2;  ///PARAMETERS OF HERO2 WILL BE ASSIGNED TO HERO1.
cout<<endl;
hero1.print();
hero2.print();
cout<<endl;




///DESTRUCTOR       ->memory deallocator,no return type,no input parameter,called when object are about to go out of scope.

//statically
hero d;

//dynamically
hero *f=new hero;
///manual destructor call for dynamically created object.
delete f;



///STATIC data member call
cout<<hero::timetocomplete<<endl; //printing without creating object

///static data function call
cout<<hero::random()<<endl;



return 0;
}


                             ///THE    END

















