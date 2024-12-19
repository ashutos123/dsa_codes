#include<iostream>

#include"myheader_file.h"   ///including user defined header file

using namespace std;
int main()
{

    cout<<"enter string of integers "<<endl;
    string s1,s2;
    cin>>s1>>s2;
    int n;
    cin>>n;
    cout<<large_add(s1,s2)<<endl;
    cout<<large_mult(s1,s2)<<endl;
    cout<<large_fact(n)<<endl;
    return 0;
}
