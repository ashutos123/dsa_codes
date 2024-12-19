#include<iostream>
#include<string>
using namespace std;


class employee
   {public:
     string name;
int salary;
string designation;

 void printdetails()
 {
    cout<<"the name of first employee is "<<this->name<<endl;
cout<<"the salary of first employe  is " <<this->salary<<endl;
cout<<"the designation of empoloyee is"<<this->designation<<endl;



 }
};
int main()
{
//cout<<"hello world"<<endl;
//cout<<"ashutosh kumar"<<endl;
//cout<<"master desire"<<endl;
//int a,b,c;
//a=3;b=4;cout<<"the value of a is "<<a
//<<endl;

//cout<<"the value of b is "<<b<<endl;

//int a,b;
//cout<<"enter the first number"<<endl;
//cin>>a;
//cout<<"enter rhe second number"<<endl;
//cin>>b;

//cout<<"the values pf a and b are: "<<a <<"and" <<b<<endl;
//cout<<" the sum of a and b is" <<a+b<<endl;
//cout<<"the product of a and b is "<<a*b<<endl;
//cout<<"the div is "<<(float)a/b<<endl;



    //int weight;
   // cout<<"enter your weight:"<<endl;
  //   cin>>weight;
 //   if(weight<40)
 //   cout<<"put on weight"<<endl;
 //   else if(weight>70)

 //   cout<<"go and exercise"<<endl;
  //  else
  //    cout<<"you are fit"<<endl;

  //int age;
  //cout<<"enter your age";
  //cin>>age;
    // switch(age)
//{
//case 12:
   //cout<<"you are in  your adoloscence";
    //break;//if this break is not applied here then it  will execute all other caes afterwards.
//case 18:
  // cout<<"you are an adult. you can vote";
   // break;

//default:
  //  cout<<" you do not  satisfy any category";
   // break;
//}





    //int i,sum=0;
   // for(i=0;i<=6;i++)
     //   sum=sum+i;
     //cout<<"the stated sum is "<<sum<<endl;



    //function



     //int a,b;
//cout<<"enter the first number"<<endl;
//cin>>a;
//cout<<"enter rhe second number"<<endl;
//cin>>b;

//cout<<"the values  a and b are: "<<a <<"and" <<b<<endl;

//cout<<" the sum of a and b is"<<add(a,b)<<endl;


//  int add(int m,int n)
//{
 // int sum=0;
 //  sum=m+n;
//return (sum);}

 //   arrays
//int arr[6],n,m;
//cout<<"enter the elements of th array"<<endl;
//for(n=0;n<=5;n++)
  // cin>>arr[n];

   //for(m=0;m<=5;m++)
      //  cout<<"the "<<m<<"th elements of the array are"<<arr[m]<<endl;

//string
//string job="manager";
//cout<<"the name is "<<job<<endl;
//cout<<"the length of name is "<<job.length()<<endl;
//cout<<"the name is "<<job.substr(2,3);

//pointers


//int a;
//int *ptr;
//a=8;
//ptr=&a;
//cout<<"The value of a is "<<*ptr<<endl;
//cout<<"the address of "<<a<<" is "<<ptr<<endl;
//cout<<"the address of "<<a<<" is "<<&a<<endl;







//object oriented featuers of c++



  employee a,b;
a.name="aman";
a.salary=200;
b.name="rohan";
b.salary=400;
b.designation="CEO";
/*cout<<"the name of first employee is "<<a.name<<endl;
cout<<"the salary of first employee  is " <<a.salary<<endl;*/

a.printdetails();









return 0;

}

