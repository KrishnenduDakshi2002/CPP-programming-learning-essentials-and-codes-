
#define NEWLINE  cout<<endl;
#include <iostream>
using namespace std;

template <class T1=int , class T2 = float>
class krish{
    public:
        T1 a;
        T2 b;
        krish(T1 x , T2 y)
        {
            a = x;
            b = y;
    
        }
        void diaplay()
        {
            cout<< "The value of a is "<<a<<endl;
            cout<< "The value of b is "<<b<<endl;
        }
};



int main()
{
    krish <> obj(2,3.33); // using the default parameters
    obj.diaplay();
    NEWLINE


    krish <float, char > obj1(3.90,'C');  // here i changed the parameters of template, not using default datatype
    obj1.diaplay();
    
    
    return 0;
}