#include<iostream>
using namespace  std;
class company
{
public:
    ///properties
    string ceo;
    int year_of_estb;
    string hr;
    string chairperson;
    int no_of_employees;

    company(string c,int y,string h,int n)      //this is called  constructor(function name is same as class name)
    {
        this->ceo=c;
        this->year_of_estb=y;
        this->hr=h;
        this->no_of_employees=n;

    }

    void printdetails()
    {
        cout<<"ceo is "<<this->ceo<<endl;
        cout<<"year of estalishment is "<<this->year_of_estb<<endl;
        cout<<"hr of the company is "<<this->hr<<endl;
        cout<<"no of employees in the company is "<<this->no_of_employees<<endl;

    }



};

int main()
{
    company google("sunder pichai",1990,"abc",20000);  //passing parametrrs in constructor
    /*ola.ceo="bhavish agarwal";
    ola.year_of_estb=2010;
    ola.hr="xyz";
    ola.no_of_employees=5000;
    google.ceo="sunder pichai";
    google.year_of_estb=1990;
    google.hr="abc";
    google.no_of_employees=20000;*/


    google.printdetails();
    cout<<"size of object is:"<<sizeof(google)<<endl;
   // ola.getpin();


}
/*int main()
{
    int i;
string s;
cout<<"enter the string"<<endl;
cin>>s;
cout<<"string is"<<endl;

    cout<<s<<endl;*/






















