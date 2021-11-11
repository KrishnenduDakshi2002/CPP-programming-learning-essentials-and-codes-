#include <iostream>
using namespace std;
class BaseClass
{

    public:
         int var_base;
        void display() 
        {
            cout<<"displaying the base class variable, variable value is : "<<var_base<<endl;
        }

};

class DerivedClass : public BaseClass
{

    public:
        int var_derived;
        void display() // base and derived both class has  display() of same name
        {
            cout<<"displaying the base class variable "<<var_base<<endl;
            cout<<"displaying the derived class variable "<<var_derived<<endl;
        }

};



int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // it is legal in c++
    // now the base class pointer will point to derived class object


    base_class_pointer->var_base =30;
    base_class_pointer->display(); // after pointing to derived class object, it will still point to
    // base class display() not the drived class display()

    // base_class_pointer->var_derived = 30; //  !! error


    DerivedClass * derived_class_pointer;  // it will bind with derived class objects
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 100;
    derived_class_pointer->display();


    /*
        This is an example of runtime polymorphism
        only on runtime it is decided which display() to call 
        
    */
     
    return 0;
}