#include <iostream>
using namespace std;

class c2;
class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
       void indata(int a)
       {
           val1 =a;   //by this method we are accessing 
                     //private member data 
       }
       void display(void)
       {
           cout<< val1 << endl;

       }
};
class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
       void indata(int a)
       {
           val2 =a;   //by this method we are accessing 
                     //private member data 
       }
       void display(void)
       {
           cout<< val2 << endl;

       }
};
void exchange(c1 &x ,c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2=temp;
}
int main()
{
    c1 object1;
    c2 object2;

    object1.indata(34);
    object2.indata(10);
    exchange(object1,object2);
    cout<<"value of Object1(34) is now "<<endl;
    object1.display();
    cout<<"value of Object2(10) is now "<<endl;
    object2.display();
    return 0;
}