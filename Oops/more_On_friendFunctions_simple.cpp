#include <iostream>
using namespace std;\
class y; // forward declaration for class y

class x
{
    int data;

    public:
        void setValue(int Value)
            {
                data = Value;
            }

    friend void add(x,y);
};
class y
{
    int num;

    public:
        void setValue(int Value)
            {
                num = Value;
            }

    friend void add(x,y);
};
void add(x o1, y o2)
{
    cout<<"summming data of X and Y objects gives me :"<<o1.data + o2.num;

}
int main()
{
    x a;
    a.setValue(3);

    y b;
    b.setValue(5);

    add(a,b);

    return 0;
}