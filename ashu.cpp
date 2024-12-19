#include<iostream>
using namespace std;
int main()
{int n,s=0;
    cout<<"enter the integer to find sum upto"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int s=s+i;

    }
    cout<<"the sum is "<< s <<endl;
    return 0;
}
