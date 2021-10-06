#include <iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
        void setNumber(int n1, int n2)
        {
            a=n1;
            b=n2;

        }

        friend complex sumComplex(complex o1,complex o2);
        //declaring sumcomplex as a friend of complex class
        void printNumber()
        {
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};


// This function is not under class , so it can't access pricate date 
//of complex class

// if it wants to access that private data of complex class 
// we have to declare that sumcomplex is a friend of complex class

// But it still not a member fucntion of class complex, it's just a
//friend of class complex.

complex sumComplex(complex o1,complex o2)
{
    complex o3;
    
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    sum = sumComplex(c1,c2);
    sum.printNumber();
    
    return 0;
}

/*
    Properties of Friend funtion
    
    1. not in the scope of class, just has access to private
       members.
    2. since it is not in the scope of the class, it cann't be 
       called from the object of that class
       c1.sumcomplex();----> error
    3. Can be invoked without the help of ay objects
    4. Usually contains the objects as arguments
    5. can be declared inside public or private section of 
       the class
    6. It cann't access the members directly by their name 
       and  need object_name.member_name to access any member
        */