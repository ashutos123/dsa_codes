#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the dimension of matrix"<<endl;
    int n;
    cin>>n;
    int A[n][n];
    int B[n][n];

    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
      cin>>A[i][j];

      cout<<" The original matrix is:"<<endl;
    for(int i=0;i<n;i++)
      {for(int j=0;j<n;j++)
      cout <<A[i][j]<<" ";
      cout <<endl;
      }

      //rotating
      for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
      B[j][n-1-i]=A[i][j];

      //printing
      cout<<" The rotated matrix is:"<<endl;
    for(int i=0;i<n;i++)
      {for(int j=0;j<n;j++)
      cout<<B[i][j]<<" ";
      cout<<endl;
      }


   /*cout<<*(*A+0)<<endl;
   cout<<*(*A+1)<<endl;
   reverse(*A,*A+n);                     //THIS PART IS , JUST FOR  UNDERSTANDING POINTERS ON 2D ARRAY.
   reverse(*(A+1),*(A+1)+n);
   cout<<*(*A)<<*(*A+1)<<endl ;
   cout<<*(*(A+1))<<*(*(A+1)+1)<<endl;
    */

//optimized approach
//first, we transpose the matrix
//Transpose
//O(n/2*n/2)
for( int i=0;i<n-1;i++)
 for(int j=i+1;j<n;j++)
 swap(A[i][j],A[j][i]);


 //Reversing each row of transposed matrix
//O(n*n/2)
for(int i=0;i<n;i++)
//row is A[i]
reverse(*(A+i),*(A+i)+n);


cout<<" The rotated matrix is:"<<endl;
    for(int i=n-1;i>=0;i--)
      {for(int j=0;j<n;j++)
      cout<<A[i][j]<<" ";
      cout<<endl;
      }
   

}




