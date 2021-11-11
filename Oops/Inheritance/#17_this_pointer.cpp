/*
    {{this }} is a keyboard which is a pointer points to the object 
    which invokes member function
*/

#include <iostream>
using namespace std;
class A
{
    int a;
    public:
        void setData(int a) // it can be written as {{ A & setData(int a)}}
        // then it will return object
        {
            this->a=a;  // {{this}} is a pointer
        }
        void getData()
        {
            cout<<"the value of a is "<<a<<endl;
        }

        /*
        // it will return object as return type
            
            A & setData(int a)    // instead {{ void }} --> {{ A & }}(which returns address of object of class A)
            {
                this->a=a;
                return *this;   //--> dereferencing this pointer
            }
            


            // then we can write like this

            A obj;
            obj.setData(4).getData();

            {{as well as obj object invokes setData() method which actually return object
            this term {{ obj.setData(4)}} behaves as an object, so we can invoke getData()
            by using {{  obj.setData(4).getData();  }}
            
            
            }}

        */
};
int main()
{
    A obj;
    obj.setData(10);
    obj.getData();

    
    return 0;
}