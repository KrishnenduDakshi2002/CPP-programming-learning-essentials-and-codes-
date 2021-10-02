#include <iostream>

using namespace std;

int main()

{

    /* 
       & ---> (adddress of) operator
       * ---> dereference operator(value at)
    */
    int a =3;
    int *ptr = &a;
    cout<<"value of a is( a) :"<<a<<endl;
    cout<<"value of &a is( &a) :"<<&a<<endl;
    cout<<"value of ptr is(ptr)) :"<<ptr<<endl;
    cout<<"value of *ptr is(*ptr) :"<<*ptr<<endl;
    cout<<"value of *(&a) is( *(&a)) same as a,*ptr :"<<*(&a)<<endl;
    return 0;
}