#include<iostream>
//#include<iomanip>
using namespace std;

class shape{

    public:
    virtual void draw()
    {
        cout<<"it's a virtual function and it draws a shape"<<endl;

    }
};

class circle :public shape
{
  void  draw()
   {
    cout<<"overiddeing in derived class, circle"<<endl;
   }

};
class square :public shape
{
    void draw()
    {
       cout<<"overiddeing in derived class square "<<endl;
    }
};

class triangle:public shape
{
    void draw()
    {
        cout<<"overiding in derived class triangle"<<endl;
    }
};
void display(shape &a)
{
  a.draw();
}

int main(void)
{
  circle c;
  square s;
  triangle t;

  display(c);
  display(s);
  display(t);

  


}
