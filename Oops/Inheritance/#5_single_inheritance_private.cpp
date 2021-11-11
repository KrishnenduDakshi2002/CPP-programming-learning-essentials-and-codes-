



#include <iostream>
using namespace std;
class base
{
    int data1; // private data member not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void base :: setData()
{
    data1 = 10;
    data2 =20;
}
int base :: getData1()
{

    return data1;
}
int base :: getData2()
{
    return data2;
}

class derived : private base // class has been derived as private
/*
    all datatypes and methods of base class are private in derived class
    
    like : data2, setData(), getData1(), getData2() */


{
     int data3;

public:
    void process();
    void display();
};
void derived :: process()
{
    setData();  // we call setdata () here
    data3 = data2 * getData1(); // by getData1() we are accessing data1 in
    // our derived class
}
void derived :: display()
{
    cout<<"value of data1 is "<< getData1()<<endl;
    cout<<"value of data2 is "<< data2<<endl;
    cout<<"value of data3 is "<< data3<<endl;
}

int main()
{
  
    derived der;
    // der.setData();  // we cann't call setdata() because it's private
    der.process();
    der.display();

    return 0;
}