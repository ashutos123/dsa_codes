#include <iostream>
using namespace std;
int main() {
    struct abc
    {int a;
    char b;
    float c;
    };
    abc o1;
    o1.a=5;
    o1.b='g';
    o1.c=4.23;
    cout<<o1.a<<o1.b<<o1.c;
    cout<<endl;
abc *p=&o1;
cout<<(*p).a<<(*p).b<<(*p).c;
cout<<endl;
abc &q=o1;
cout<<q.a<<q.b<<q.c;
    return 0;
}