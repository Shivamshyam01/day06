#include<iostream>
using namespace std;
class A
{
    public:
    int a;
};
class B: virtual public A
{
    public:
    int b;
};
class C: virtual public A
{
    public :
    int c ;

};
class D : public B , public C
{
    public :
    int total;
};
int main (){
    D d ;
    d.a = 10;
    d.b = 20;
    d.c = 30;
    d.total = d.a + d.b + d.c ;
    cout << "total = " <<d.total;
    return 0 ;
}