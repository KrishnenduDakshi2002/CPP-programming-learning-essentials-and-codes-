#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
        complex(int x , int y)
        {
            a=x;
            b=y;

        }
        complex(int x)
        {
            a=x;
            //default b=0;

        }
        complex()
        {
            a=0;
            b=0;

        }
        void printNumber()
        {
            cout<<"the point is :"<<a<< " + "<<b<<"i"<<endl;
        }

};
int main()
{
    complex c1(4,8);  // parameterized constructors
    c1.printNumber();
    complex c2(5);   // parameterized constructor
    c2.printNumber();
    complex c3;     // from default constructor
    c3.printNumber();
    
    
    return 0;
}