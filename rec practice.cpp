/*#include<iostream>
using namespace std;
int main()
{int l;
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    cout<<"strin is "<<s<<endl;
    l=s.length();
    cout<<"length is "<<l<<endl;
    if(fun(s,0,l-1)==1)
        cout<<"is palin"<<endl;
    else
        cout<<"not"<<endl;
}
int fun(string c,int i,int j)
{
    if(i>=j)
        return 1;
    else
        if(s[i]!=s[j])
        return 0;
    else
        return fun(s,i++,J--)
}*/

//substrings of a string lexicographically
/*#include<iostream>
using namespace std;
int main()
{string s,temps;
int i;

cout<<"enter the string :\n"<<endl;
cin>>s;
cout<<"substrings are  :\n"<<helper(s,"",0)<<endl;

}

helper(string s,string temps,int i)
{if(s.length()==i)
{cout<<temps<<" ";
return;}

helper(s,temps+s[i],i++);
helper(s,temps,i++);

}*/




/*#include<iostream>

using namespace std;
int main()
{
int  a=2,ans=1,b=5;
for(int i=0;i<b;i++)
ans=ans*a;
cout<< " answer is  "<<ans<<endl;
return 0;
}*/



#include<iostream>
using namespace std;
 int main()
 {
     int m,n;
     cout<<"enter the value of base and power :\n"<<endl;
     cin>>m,n;


     cout<<"the value is " <<value(m,n)<<endl;
     return 0;
 }
int value(int a,int b)
{
    if(b==0)
    return 1;
    else
    if(b==1)
    return a;

    int ans=value(a,b/2);

    if(b%2==0)
    return ans*ans;
    else
        if(b%2!=0)
    return a*ans*ans;

}





























