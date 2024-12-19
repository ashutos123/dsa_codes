#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string large_add(string s1,string s2)
{string s;
    int c=0;
    for(int i=s1.size()-1,j=s2.size()-1;i>=0&&j>=0;i--,j--)
    {

     int temp=((s1[i]-'0')+(s2[j]-'0')+c);
        s.push_back((temp%10)+'0');
          c=(temp/10);
    }
          if(c)
          s.push_back((c+'0'));
          reverse(s.begin(),s.end());
          return s;
}
int main()
{

    cout<<"enter the string of integers to be added"<<endl;
    string s1,s2;
    cin>>s1>>s2;
    cout<<"The sum is "<<large_add(s1,s2)<<endl;


}
