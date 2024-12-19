///DEQUE


/*#include<iostream>
#include<deque>

using namespace std;

 int main()
 {
     deque<int>d;
     d.push_back(1);

    d.push_front(2);

    for(int i:d){
        cout<<i<<" "<<endl;

    };

    d.pop_front();    //back and front both work here
    for(int i:d){
        cout<<i<<" "<<endl;
    }

cout<<"first  index element is :"<<d.at(0)<<endl;

cout<<"front :"<<d.front()<<endl;
cout<<"back :"<<d.back()<<endl;

cout<<"empty or not empty :"<<d.empty()<<endl;

cout<<"before erase  :"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase  :"<<d.size()<<endl;
for(int i:d)
    cout<<i<<" ";
cout<<endl;

}*/









///LIST    //in list, we reach elements by travesing in array.at()functions is not defined here.

 /*#include<iostream>
 #include<list>


 using namespace std;

 int main()
 {
     list<int> l;

     l.push_back(2);
     l.push_front(1);

     list<int> n(l);   //copying all elements.

list<int>a(5,10);

     for(int i:n)
        cout<<i<<" "<<endl;



for(int i:a)
        cout<<i<<" "<<endl;



     l.erase(l.begin());
     cout<<"after erase :"<<endl;
     for(int i:l)
        cout<<i<<" "<<endl;



     cout<<"size of list :"<<l.size()<<endl;
     }*/








///STACK -> LAST  IN, FIRST OUT  CONCEPT

/*#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack<string> s;
    s.push(" i love you");
    s.push("babbar");
    s.push(" hey ashutosh kumar");


    cout<<"top element is :"<<s.top()<<endl;

    s.pop();
    cout<<"now top element is :"<<s.top()<<endl;

    cout<<"size of stack is :"<<s.size()<<endl;

    cout<<"empty or not :"<<s.empty()<<endl;

}*/








///QUEUE                  FIRST IN,FIRST OUT.
/*#include<iostream>
#include<queue>

using namespace std;

int main()
{
  queue<string> q;

  q.push("love");
  q.push("babbar");
  q.push("kumar");

  cout<<"top element is :"<<q.front()<<endl;

  q.pop();
  cout<<"top element is :"<<q.front()<<endl;
cout<<"size of queue is :"<<q.size()<<endl;
cout<<"empty or not :"<<q.empty()<<endl;
}*/





///priority queue
/*#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // max heap
    priority_queue<int>maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(4);
    maxi.push(2);
    maxi.push(3);

    cout<<"size  :"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0; i<n; i++)

    {
        cout<<maxi.top()<<" "; //here we first take the max element and we pop it out,then again we take max out of left ones and pop it out
        maxi.pop();
    }
    cout<<endl;


    mini.push(2);
    mini.push(9);
    mini.push(6);
    mini.push(7);
    mini.push(8);

    int m=mini.size();
    for(int i=0;i<m;i++)
    {cout<<mini.top()<<" "; //here we first take the min element and we pop it out,then again we take min out of left ones and pop it out
        mini.pop();
    }
    cout<<endl;


    cout<<"khali wali ho kya bhai ?? "<<mini.empty()<<endl;

}*/






///SET    ALL elements entered are unique,any repeated element is represented only once.
/*#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);                ///here time complexity is O(log n
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(5);


    for(auto i:s){
        cout<<i<<" ";

    }cout<<endl;

   // s.erase(s.begin());
set<int>::iterator it=s.begin();
it++;
s.erase(it);
    for(auto i:s){
        cout<<i<<" ";}cout<<endl;
        cout<<"5 is present or not :"<<s.count(5)<<endl;
       cout<<"5 is present or not :"<<s.count(10)<<endl;

    }*/








///MAP
#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int,string> m;
    m[1]="kumar";
    m[2]="ashutosh";
    m[23]="love";
m.insert({6,"man"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
        }

       cout<<"finding 6 :"<<m.count(6)<<endl;


       m.erase(6);
       cout<<"after erasing :"<<endl;
       for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
        }cout<<endl;



      auto it=m.find(1);          //this find keywrod gives  itertor it the adress of 1 in memory.
      for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
      }

}

































