#include <bits/stdc++.h>
using namespace std;

/* Function prints union of arr1[] and arr2[]
   m is the number of elements in arr1[]
   n is the number of elements in arr2[] */
void printUnion(int arr1[], int arr2[], int m, int n)

{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else {
            cout << arr2[j++] <<  " ";

            i++; 
        }       
    }

    /* Print remaining elements of the larger array */
    while (i < m)
        cout << arr1[i++] << " ";

    while (j < n)
        cout << arr2[j++] << " ";


}
void print_intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    set<int> s;  //set for handling duplicate elements in intersection list
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            s.insert(arr2[j]);   //insertion in set s
            i++;
            j++;
        }
    }
    for(auto itr: s)  //printing intersection set list
    {
        cout<<itr<<" ";
        }

}
void ismember(int arr1[],int arr2[],int m,int n,int x)
{ int t=0;
  for(int i=0;i<m;i++)
  {if(x==arr1[i])
  {cout<<"it is memebr of set1"<<endl;t=1;
  break;}
  else 
  continue;
  }
  {for(int i=0;i<n;i++)
  if(x==arr2[i])
  {cout<<"it is memebr of set2"<<endl;t=1;
  break;}
  else 
  continue;
  }
  if(t==0)
  cout<<"it does not belong to any set"<<endl;
}
void insertset(int arr1[],int arr2[],int m,int n,int a,int b)
{
    if(a==1)
    {
        int arrr1[m+1];
        for(int i=0;i<m;i++)
        arrr1[i]=arr1[i];
        arr1[m]=b;
        cout<<"after insertion:"<<endl;

        for(int i=0;i<m+1;i++)
        cout<<arr1[i]<<" ";
        cout<<endl;
    }
    else if(a==2)
    {
      int arrr2[n+1];
      for(int i=0;i<n;i++)
      arrr2[i]=arr2[i];
        arr2[n]=b;
        cout<<"after insertion:"<<endl;
        for(int i=0;i<n+1;i++)
        cout<<arr2[i]<<" ";
        cout<<endl;  
    }
}
void delset(int arr1[],int arr2[],int a,int b)
{
    if(a==1)
    {
        for(int i=b;i<sizeof(arr1) / sizeof(arr1[0])-1;i++)
        arr1[i]=arr1[i+1];
        cout<<"after deletion:"<<endl;
        for(int i=0;i<sizeof(arr1) / sizeof(arr1[0]);i++)
        cout<<arr1[i]<<" ";
        cout<<endl;

    }
    else if(a==2)
    {
       for(int i=b;i<sizeof(arr2) / sizeof(arr2[0])-1;i++)
        arr2[i]=arr2[i+1];
        cout<<"after deletion:"<<endl;
        for(int i=0;i<sizeof(arr2) / sizeof(arr2[0]);i++)
        cout<<arr2[i]<<" ";
        cout<<endl; 
    }
}

/* Driver program to test above function */
int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Function calling
    cout<<"The union of two sets is:"<<endl;
    printUnion(arr1, arr2, m, n);
    cout<<endl;
    cout<<"the intersection of two sets is:"<<endl;
    print_intersection( arr1,arr2,m,n);
    cout<<endl;
    cout<<"enter the element to see if its the memeber of the given sets"<<endl;
    int a;
    cin>>a;
    ismember(arr1,arr2,m,n,a);
    cout<<endl;
    cout<<"enter the set in which you want to insert the element"<<endl;
    int s;
    cin>>s;
    cout<<"enter the elemnt to insert:"<<endl;
    int e;
    cin>>e;
    insertset(arr1,arr2,m,n,s,e);
    cout<<endl;
    cout<<"enter the set from which you want to delete element:"<<endl;
    int st;
    cin>>st;
    cout<<"enter the position from which you want to delete it:"<<endl;
    int p;
    cin>>p;
    delset(arr1,arr2,st,p);




    return 0;


}


