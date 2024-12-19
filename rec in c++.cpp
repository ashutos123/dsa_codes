#include<iostream>
using namespace std;

//function definition
//recursion defined

int fact(int a)
{
    if(a==1||a==0)
{return 1;}

else
    {return(a*fact(a-1));}


}
int main()
{int n;

cout<<"enter the number"<<endl;

cin>>n;

cout<<"the factorial of n is "<<fact(n)<<endl;

return 0;
}



