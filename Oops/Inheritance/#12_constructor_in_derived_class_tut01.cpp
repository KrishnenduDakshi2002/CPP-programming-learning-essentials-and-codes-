/*
    
    when both base and derived classes have their own constructors

    case01: single inheritance 
    
    class A : public B{
        
        //order of execution of constructors is ::  first A() --> then B()

    };
    
    case02: multiple inheritance
    
    class C: public A, public B {

        //order of execution of constructors is ::  A()-->then B() and then C()(constructor of derived class)
        
    };
    
    case03:
    class A: public B, virtual public C{

        //order of execution of constructors is ::  
        
        C()(constructor of virtual base class )--> then B()(cons of non-virtual base class)-->then A() derived class

    }; 
    
 */

#include <iostream>
using namespace std;
class Base1{
    protected:
    int data1;
    public:
        Base1(int i)
        {
            data1 =i;
            cout<<"Base1 class constructor is called"<<endl;

        }
        void printData_Base1()
        {
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    protected:
    int data2;
    public:
        Base2(int i)
        {
            data2 =i;
            cout<<"Base2 class constructor is called"<<endl;

        }
        void printData_Base2()
        {
            cout<<"The value of data2 is "<<data2<<endl;
        }

};

class Derived : public Base1, public Base2  // here the order is crutial, of Base1 and Base2, if we change this order with Base 2, base1
//then constructor of base 2 will be executed first then base 1
{
    int Derived1, Derived2;
    public:
        Derived(int a , int b, int c, int d):Base1(a), Base2(b){ //here this order doesn't matter
            Derived1=c;
            Derived2=d;
            cout<<"Derived class constructor is called"<<endl;
        }
        void printData_Derived()
        {
            cout<<"The value of data1 is "<<data1<<endl;
            cout<<"The value of data2 is "<<data2<<endl;
            cout<<"The value of derived1 is "<<Derived1<<endl;
            cout<<"The value of derived2 is "<<Derived2<<endl;
        }
};


int main()
{
    Derived krish(1,2,3,4);
    krish.printData_Derived();
    return 0;
}