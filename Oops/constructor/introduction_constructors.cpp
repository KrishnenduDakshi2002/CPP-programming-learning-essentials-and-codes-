#include <iostream>
using namespace std;
// constructors are a special member fucntion with
// same name as of the class, don't have any return type.
// It is automatically invoked whenever an object is created
// it is used to initialize the objects of its class
class Complex
{
    int a,b ;
    public:
        Complex(void); // constructor declaration
        
        void print_complex(){
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex :: Complex(void)   // constructor(we called it constructor
//because we construct objects and set its value)

// its a default constuctor
{
    a=10;
    b=20;
}



int main()
{
    Complex c1,c2,c3;
    c1.print_complex();
    c1.print_complex();
    c1.print_complex();
    
    return 0;
}

/*
    1. it should be declared in public section of the class
    2. they are automatically invoked whenever the object is 
       created
    3. Do not have return type, ythey don't have any return types
       not even void
    4.it can have default arguments
    5. we cann't refer to their address   .*/
