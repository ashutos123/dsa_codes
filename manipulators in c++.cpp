                                ///manipulators

 #include<iostream>
 #include<iomanip>
 #include<math.h>
 using namespace std;
 int main()
 {   /*float x=0.1;
    float y=1.0;
    float z=1234.0;
    int a=14;
     cout<<setw(10)<<setfill('+')<<1290<<34<<endl;///range of setw is next(imediate effect) ,,and range of endl manipulator is now.
     cout<<setw(10)<<12<<setw(5)<<34<<endl;
     cout<<setw(5)<<right<<12<<endl;  ///range of setfill is all.means it is applied to all aforecoming statements
     cout<<setprecision(16)<<y<<endl;
     cout<<scientific<<x<<endl;
     cout<<fixed<<x<<endl;
     cout<<hex<<14<<" "<<15<<endl;
     cout<<13<<endl; ///instead 13, d is displayed (range of hex is all)
     cout<<oct<<13<<endl;*/

     ///making a pattern
     /*cout<<"enter height of triangle"<<endl;
     int n;
     cin>>n;
     for(int i=0;i<=n-1;i++)
     {
         for(int j=n-1-i;j>=1;j--)
            cout<<" ";
         for(int k=0;k<2*i+1;k++)
            cout<<'*';
         cout<<endl;
     }


    for(int i=1;i<=n;i++)
  cout<<setw(n-i+1)<<'*'<<setw(2*i-1)<<setfill('*')<<' '<<endl;
*/


  ///trigonometric function plotter
  /*double a,b,s;
  char c;
  cout<<"ente the starting angle in degrees";cin>>a;
  cout<<"enter ending angle in degrees";cin>>b;
  cout<<"enter step length";cin>>s;
  cout<<"enter fill character";cin>>c;
  for(double j=0;j<=110;j++)
    cout<<"-";
    cout<<endl;

  for(double i=a;i<=b;i+=s)
  {
      int x=floor(tan(i*3.14/180)*50);
      if(x>=0)
      {
          cout<<setw(55)<<setfill(' ')<<"|"<<setw(x)<<setfill(c)<<'+'<<endl;
      }
      else
      {
          x=abs(x);
          cout<<setw(55-x)<<setfill(' ')<<'+'<<setw(x)<<setfill(c)<<"|"<<endl;
      }
   }
    */


    ///printing inverse triangle pattern
    /*cout<<"enter height of triangle"<<endl;
    int h;
    cin>>h;
    for(int i=h;i>=1;i--)
    {
        cout<<setw(h-i);
        for(int j=h-i+1;j<h+i;j++)
        {
            if(j<=5)
                cout<<j;
            else
                cout<<2*h-j;
        }
        cout<<endl;
    }
    //cout<<endl;
    for(int i=1;i<=h-1;i++)
    {
        cout<<setw(h-i);
        for(int j=h-i;j<h-i-1;j++)
        {
            if(j<=5)
                cout<<j;
            else
                cout<<2*h-j;
        }
        cout<<endl;

    }
     */

    ///exponential curve


/*double a,b;
float s;                                              ///take a=-2,b=10,s=0.5
char c;
cout<<"enter the starting point";cin>>a;
  cout<<"enter ending point";cin>>b;
  cout<<"enter step length";cin>>s;
  cout<<"enter fill character";cin>>c;
 for(double j=0;j<120;j++)
    cout<<'-';
 cout<<endl;
  for(double i=a;i<=b;i+=s)
  {
      int v=floor(exp(i));
      cout<<setw(5)<<setfill(' ')<<'|'<<setw(v)<<setfill(c)<<'+'<<endl;
  }
*/


///damped exponential function
double a,b;
float s;
  char c;
  cout<<"ente the starting angle in degrees";cin>>a;
  cout<<"enter ending angle in degrees";cin>>b;
  cout<<"enter step length";cin>>s;
  cout<<"enter fill character";cin>>c;
  for(double j=0;j<=110;j++)
    cout<<"-";
    cout<<endl;

  for(double i=a;i<=b;i+=s)
  {
      int x=floor((4*exp(-i)*sin(i*5))*20);
      if(x>=0)
      {
          cout<<setw(55)<<setfill(' ')<<"|"<<setw(x)<<setfill(c)<<'+'<<endl;
      }
      else
      {
          x=abs(x);
          cout<<setw(55-x)<<setfill(' ')<<'+'<<setw(x)<<setfill(c)<<"|"<<endl;
      }
   }


     ///pattern assignment 2

  /*string s;
 cout<<"enter the string"<<endl;
 cin>>s;
 int l=s.size();
 int c=-1;
 for(int i=l;i>=1;i--)
 {
     cout<<setw(l-i);

     for(int j=l-i+1;j<l+i;j++)

     {
         if(j<=l)
            cout<<s[j-1];
         else
            cout<<s[l+i-j+c];

     }
     c++;
     cout<<endl;
 }
*/
 }


