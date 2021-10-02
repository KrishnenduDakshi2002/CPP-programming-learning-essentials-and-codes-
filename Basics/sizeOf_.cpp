#include <iostream>

using namespace std;

int main()
{
    float a =34.3;
    long double b =34.3;
    long double c =34.3f;
    float d = (int)34.3;

    cout<<"size of a is "<<sizeof(a)<<endl;  // size of float 
    cout<<"size of 34.3 is "<<sizeof(34.3)<<endl;//size of double
    cout<<"size of b is "<<sizeof(b)<<endl;//size of double
    cout<<"value of d is "<<d<<endl; // print as integer
    cout<<"size of 34.3f is "<<sizeof(34.3f)<<endl;//size of float
    cout<<"size of 34.3F is "<<sizeof(34.3F)<<endl;//size of float
    cout<<"size of 34.3l is "<<sizeof(34.3l)<<endl;//size of double 
    cout<<"size of 34.3L is "<<sizeof(34.3L)<<endl;//size of double
    cout<<"size of c is "<<sizeof(c)<<endl;//size of double 
    cout<<"size of d is "<<sizeof(d)<<endl;//size of float 

    

    return 0;
}