#include<iostream>                          ///READ COMMENTS CAREFULLY!!!!
using namespace std;                        ///READ CLASS AND  MAIN PART SYNCHRONISINGLY!!!
///ENCAPSULATION:-
/* class student ///EVERYTHING WRAPPED IN A SINGLE CLASS ,CALLED ENCAPSULATON.
{
private:
    string name;
    int age;
    int height;


public:
    int getage()
    {
        return this->age;

    }
};  */


///INHERITANCE:-   different types of inheritance have been mentioned in notebook.
class human
{
    public:
    int height;
    int weight;
    int age;
public:
    int getage()
    {
        return this->age;

    }
    void setweight(int w)
    {this->weight=w;}


};
class male: public human //this is how we inherit publically
{
public:
    string color;
    void sleep()
    {
        cout<<"male sleeping" <<endl;
    }
  void setcolor(string r)
  {
      this->color=r;
  }

};

///INHERITANCE AMBIGUITY    when two more functions with same name are their in in two or more
class a                     ///classes ,then specified functions are called as following.
{ public:

    void func()
    {
     cout<<" A speaks" <<endl;
    }
};

class b
{
public:
    void func()
    {
        cout<< "A speaks" <<endl;
        cout<< "A roars" <<endl;

    }
};

class c:public a,public b

{
public:
    void func1()
    {cout<< "Q screams" <<endl;}


};



///POLYMORPHISM   ->when same thing exists in different forms for different point of references.
                  ///ex:an analogy can be drawn from this,a person is father for his son,he is son for his parents,he is husband for his wife
                      ///














int main()
{
    /*student first;
    cout<<"sab encapsulate ho gaya "<<endl;*/


///INHERITANCE
/*male obj1;
cout<<obj1.age<<endl;
cout<<obj1.weight<<endl;
cout<<obj1.height<<endl;

cout<<obj1.color<<endl;
obj1.setcolor("red");
cout<<obj1.color<<endl;
obj1.setweight(95);
cout<<obj1.weight<<endl;
obj1.sleep();

///inheritance ambiguity
a obj;
obj.func();
cout<< endl;
b obj1;
obj1.func();
cout<< endl;
c obj2;
obj2.a::func();
cout<<endl;
obj2.b::func(); */






















    return 0;

}































