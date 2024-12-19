#include<iostream>
using namespace std;

int main()
{int a=3,b=6;
cout<<" a&b: "<< (a&b) <<endl;                               /// calculations are done on bit level here.first a and b are converted into binary
cout<<"a|b:"<<(a|b)<<endl;                                     //  then  logical operation happens on each bit .obtained binary bits are again
cout<<"~a :"<<(~a)<<endl;   //NEGATIOIN OOPERATION            converted back to decimal as result.the same happens with or, and, xor and negation
cout<<"a^b :"<<(a^b)<<endl;    //xOR operation
cout<<"17 three right shift:"<<(17>>3)<<endl;     ///right shift operation,17 converted to binary bits,3 rightmost bits are deleted and remaining
cout<<"17 two right shift :"<<(17>>2)<<endl;    ///bits are each shifted thrice on right,and at last 3 empty leftmost places are filled by zeroes.
cout<<"19 one left shift:"<<(19<<1)<<endl;      ///obtained bits are converted back to decimals  ,as result. short-cut: 17/2^3.


                                                    ///left shift operation the above procedure happens here also but in left side.
cout<<"22 two left shift :"<<(22<<2)<<endl;         ///short-cut: 22*2^2.

int i=6;
cout<<(i++)<<endl; /// i= 6 printed then i =7
cout<<(++i)<<endl;  ///i=8 printed
cout<<(i--)<<endl;/// first i=8 printed,then i=7
cout<<(--i)<<endl;  ///i=6 printed

int x=1,z=2;
if(x-->0|| ++z>2)
    cout<<"stage1-inside if"<<endl;
else
    cout<<"stage2- inside else"<<endl;
cout<<x<<" "<< z <<endl;
int y=7;
int g=y++;
int f=++y;
cout<<g <<" "<<f<<endl;

for(int a=1,b=2;a>=0||b>=0;a--,b--)   ///multiple conditions in for loop function

cout<<a<<" "<<b<<endl;


for(int i=0;i<5;i++)
    {cout<<"hi"<<endl;///continue statement will allow only first two statements to be executed not the third one

    cout<<"hey"<<endl;
    continue;
cout<<"reply me bro"<<endl;}

for(int j=0;j<=5;j++)
{                       ///prints only 0,2,4
    cout<<j <<" "<<endl;
    j++;
}




{///variables scope

    int a=5;
    cout<<a<<endl;
    if(true)  //this means whatever is in ,if ,has to be executed anyhow
       {
           int b=7;
           cout<<b<<endl;
           }
            int b=9;
    cout<<b<<endl;
    }



}
