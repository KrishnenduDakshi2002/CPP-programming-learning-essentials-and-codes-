#include <iostream>
using namespace std;

/*
    template <class T1 , class T2>
*/
template <class T1 , class T2>   // T1 and T2 are two datatype which i donn't know now but i will specify those in main()
 

class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        
        }

        void display()
        {
            cout<<this->data1<<this->data2;
        }
};


int main()
{
    myClass <int , char> obj(10,'c');  // T1 = int, T2 = char
    obj.display();

    
    
    return 0;
}