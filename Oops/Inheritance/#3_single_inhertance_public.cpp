
//https://www.youtube.com/watch?v=S1BR0xDdsyM&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=38

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

class derived : public base // class has been derived publically
{

    int data3;

public:
    void process();
    void display();
};
void derived :: process()
{
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
    der.setData();
    der.process();
    der.display();

    return 0;
}