#include <iostream>
using namespace std;
class BaseClass
{

    public:
         int var_base=1;
        virtual void display() 
        {
            cout<<" Class  BASE :: displaying the base class variable, variable value is : "<<var_base<<endl;
        }

};

class DerivedClass : public BaseClass
{

    public:
        int var_derived=2;
        void display() // base and derived both class has  display() of same name
        {
            cout<<"class DERIVED :: displaying the base class variable "<<var_base<<endl;
            cout<<"class DERIVED :: displaying the derived class variable "<<var_derived<<endl;
        }

};



int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_drived;

    base_class_pointer =& obj_drived;  // base class pointer will point to derived class object,
    //but it will still access only base class members

    // we made display() of base class virtual 

    base_class_pointer->display(); // so now it will invoke derived class display() not base class display() unlike previous


    
    
     
    return 0;
}