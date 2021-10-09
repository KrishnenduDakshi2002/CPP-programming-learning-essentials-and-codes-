#include <iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    public:
        simple(int a, int b=10) // b = 10 is default value
        {
            data1 = a;
            data2 = b;

        }
        void printData();
};
void simple :: printData()
{
    cout<<"The value of data is :"<<data1<< ", "<<data2<<endl;
}
int main()
{
    simple s(1);
    s.printData();
    simple s1(1,20); // changing default value with 20
    s1.printData();
    
    return 0;
}