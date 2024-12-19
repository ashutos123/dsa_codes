#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string large_add(string s1,string s2)
{string s3;
    int c=0;
    for(int i=s1.size()-1,j=s2.size()-1;i>=0&&j>=0;i--,j--)
    {

     int temp=((s1[i]-'0')+(s2[j]-'0')+c);
        s3.push_back((temp%10)+'0');
          c=(temp/10);
    }
          if(c)
          s3.push_back((c+'0'));
          reverse(s3.begin(),s3.end());
          return s3;
}
string large_mult(string s1,string s2)
{
    string res,s;
    int n1=s1.size(),n2=s2.size();
    for(int i=0;i<n1+n2;i++)
        s.push_back(0+'0');
    int cnt=-1;
    for(int i=n1-1;i>=0;i--)
    {
        int carry=0;
        res.clear();
        for(int j=n2-1;j>=0;j--)
        {
            int temp=((s1[i]-'0')*(s2[j]-'0')+carry);
            res.push_back((temp%10)+'0');
            carry=temp/10;
        }
        cnt++;
        if(carry)
        res.push_back((carry+'0'));
        reverse(res.begin(),res.end());
        for(int k=0;k<cnt;k++)
            res.push_back((0+'0'));
        s=large_add(s,res);
        return s;
    }

}
int main()
{
    cout<<"enter the string of integers"<<endl;
    string s1,s2;


    cin>>s1>>s2;

    cout<<"the multiplicstion is "<<large_mult(s1,s2)<<endl;


}
