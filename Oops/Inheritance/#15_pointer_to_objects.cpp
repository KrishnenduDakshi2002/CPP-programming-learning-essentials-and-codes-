#include <iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
        void getData()
        {
            cout<<"the real part is  :"<<real<<endl;
            cout<<"the imaginary part is  :"<<imaginary<<endl;
        }
        void setData(int a, int b)
        {
            real = a;
            imaginary =b;
        }


};
int main()
{
    complex c1;
    complex *ptr = &c1;
    (*ptr).setData(1,2); //  is exactly same as {{ptr->setData(1,2);}}
    (*ptr).getData();

    // Aliter

    complex *ptr1 = new complex;
    (*ptr1).setData(1,2);
    ptr1->getData();   //arrow operator



    // ************* Array of objects *******

    complex *ptr2 = new complex[3];
    
    ptr2->setData(1,2);     //object 1
    (ptr2+1)->setData(3,4);  //object 2
    (ptr2+2)->setData(5,6); //object 3
    
    (ptr2)->getData();   
    (ptr2+1)->getData();   
    (ptr2+2)->getData();   

 
    
    return 0;
}