
#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
   //pairs<int,int>p={1,2}
   //cout<<p.first<<" "<<p.second<<endl;
   vector<int>v;
   v.push_back(3);
    v.push_back(6);
     v.push_back(9);
     cout<<v[0]<<" "<<v[2]<<endl;
   v.emplace_back(45);
   cout<<v.at(3)<<endl;
   vector<int>v1(2,49);
   //vector<<int>v(v1);
   cout<<v1[0]<<" "<<v1[1]<<endl;
   v1.push_back(43);
   v1.emplace_back(56);
   v.emplace_back(12);
   cout<<v.back()<<" "<<v.begin()<<endl;
   cout<<v1.back()<<" "<<v.begin()<<endl;


return 0;
}



