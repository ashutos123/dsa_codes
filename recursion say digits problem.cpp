/*#include<iostream>
using namespace std;

int main()
{
    int a=756,digit;
    string ch[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

        cout<< endl << endl <<endl;
         saydigit(a,ch);
         cout<<endl <<endl <<endl;
         return 0;
}

void saydigit(int a,string ch[])
{    ///base case
    if(a==0)
        return;
    ///small calculation
    int digit=a%10;
    a=a/10;
    ///recursive call
    saydigit(a,ch);

    cout<< ch[digit]<<endl;
}*/


#include<iostream>
using namespace std;
int main()
{
    int a[]={4,6,7,8,9,10};


     cout<< isSorted(a,6)) <<endl;
     return 0;
}

bool isSorted(int a[],int size)
{
    if(size==0 || size==1)
       {return true;}


   if(a[0>a[1])
       {return false;}

    bool isSmallerSorted=isSorted(a+1,size-1);
    return isSmallerSorted;
}





