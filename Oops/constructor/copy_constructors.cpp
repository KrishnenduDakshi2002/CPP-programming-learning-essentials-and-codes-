
//https://www.youtube.com/watch?v=jhZjyaNO4Wo&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=34

        /*
            A copy constructor is a member function that initializes 
            an object using another object of the same class
        
            so we have to pass addressof another object of that class
            to copy constructors argument.

        */


#include <iostream>


using namespace std;
class number{
    int a;
    public:
        number(){
            a=0;
        }; //default constructor
        number(int num)
        {
            a=num;
        }
        // every class has its own default copy constructor
        //If there is no user made copy constuctor then compiler will 
        // run default constructor of that class
        number(number &obj) // user made copy constructor
        {
            cout<<"User made copy constructor called !!"<<endl;
            a = obj.a;
        }

        void display()
        {
            cout<<"The number for this object is "<<a<<endl;
        }

};
int main()
{
    number x(10),y,z(45),z2; // in this line 4 objects are present
    x.display();
    y.display();
    z.display();

    number z1(x); // invoking copy constructor
    z1.display();
    // it can be user made or it can be class's default
    // copy constructor.
    // it will not throw any error, if we aren't declare
    // any user made copy constructor

    z2 =z; // assigning value  // copy constructor  is not invoked
    number z3 =z;   // copy constructor  is invoked
    z3.display();
    return 0;



}


    /*       ******* when is copy constructor called?
 
            1. When an object of the class is returned by value. 
            2. When an object of the class is passed (to a function) by value as an argument. 
            3. When an object is constructed based on another object of the same class. 
            4. When the compiler generates a temporary object.
             
             it is, however, not guaranteed that a copy constructor will be 
             called in all these cases, because the c++ standard allows the compiler to
             optimize the copy away in certain cases.


            ****** when is user defined  copy constructor needed?

            Compiler defined copy constructor works fine in general cases
            but if an object has pointers or any runtime allocation of the 
            resoutces like filehandle, a network connection... etc

            1. default copy constructor does only shallow copy.
            2. Deep copy is possible only with user defined copy
                (in deep copy  we make sure that pointrs or references of copied object poiny
                new memory allocation, which is not possible in shallow copy)



            ****** can we make copy constructor private?
            yes, we can, This is particularly useful when our class has pointers or
            dynamically allocated resource.


            ****** Why argument to a copy constructor must be passed as a reference? 
            
            a copy construnctor is called when an object ids passed by value.
            Copy constructor itself is a function , so if we pass an argument by
            value in a copy contructor, a call to copy constructor
            would be made to call copy constructor which becomes a non-terminating 
            chain of calls. Therefore compiler doesn't allow parameters to be passesd
            by value.

*/                
