#include <iostream>
using namespace std;
class complex{
    int a,b; // because these are private variables
    // we have to use methods to access them in our
    // driver program
    public:
    void setdata(int complex1 , int complex2)
    {
        a=complex1;
        b=complex2;

    }

    void setdataBySum(complex object1 , complex object2)
    // object1 and object2 are objects of complex class
    {
        a= object1.a + object2.a;
        b= object1.b + object2.b;


    }

    void print_complex(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }

};
int main()
{
    complex complex1, complex2, complex3;
    complex1.setdata(1,2);
    complex2.setdata(3,4);
    complex3.setdataBySum(complex1,complex2);
    complex3.print_complex();



    return 0;
}