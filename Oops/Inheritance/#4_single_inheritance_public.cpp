#include <iostream>
using namespace std;

class base{
    int data1; 
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();


};
// defining methods 
void base ::setData()
{
    data1= 10;
    data2= 20;

}
int  base::getData1()
{
    return data1;

}
int  base::getData2()
{
    return data2;

}
// derived class
class derived :public base{
    int data3;
    public:
        void process();
        void display();

};
void derived::process()
{

    data3 = data2*getData1();
}
void derived::display()
{
    cout<< " the value of data1 is "<<getData1()<<endl;
    cout<< " the value of data1 is "<<data2<<endl;
    cout<< " the value of data1 is "<<data3<<endl;
}



int main()
{
    derived dev1;
    dev1.setData();  
    dev1.process();
    dev1.display();
    
    
    return 0;
}