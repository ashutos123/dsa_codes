/*#include<iostream>
#include<array>

using namespace std;
int main()
{
    int basic[3]={1,3,5};
    array<int,4>a={1,2,3,5};
    int size=a.size();
cout<<"size"<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;

    }
    cout<<"element at second index:"<<a.at(1)<<endl;
    cout<<"empty or not empty:"<<a.empty()<<endl;
    cout<<"first element is :"<<a.front()<<endl;
    cout<<"last element is : "<<a.back()<<endl;


}*/


//VECTORS

#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;

vector<int> a(5,2);
vector<int> last(a);      ///all elements of vector 'a' copied to another vector 'last'
cout<<"print last"<<endl;
for(int i:last)
{cout<<i<<" ";}cout<<endl;
cout<<"capacity :"<<v.capacity()<<endl;    ///size means no. of elements &capacity means total memory allocated to that array

v.push_back(1);
cout<<"capacity :"<<v.capacity()<<endl;

v.push_back(2);
cout<<"capacity :"<<v.capacity()<<endl;

v.push_back(3);
cout<<"capacity :"<<v.capacity()<<endl;   ///when size of vector exceeds its capacity then,vector doubles its capacity to fit it.
cout<<"size is  :"<<v.size()<<endl;

v.push_back(4);
cout<<"capacity :"<<v.capacity()<<endl;

v.push_back(5);
cout<<"capacity :"<<v.capacity()<<endl;
cout<<"size :"<<v.size()<<endl;

cout<<"element at third index is :"<<v.at(3)<<endl;

cout<<"first element is : "<<v.front()<<endl;
    cout<<"last element is : "<<v.back()<<endl;

    cout<<"before pop :"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
        }

        v.pop_back();
        cout<<"after pop :"<<endl;
        for(int i:v){
            cout<<i<<" "<<endl;

        }


        cout<<"size before clear :"<<v.size()<<endl;
        v.clear();
        cout<<"size after clear :"<<v.size()<<endl;



   }
