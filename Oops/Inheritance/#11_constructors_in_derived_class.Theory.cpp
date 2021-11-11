/*
    1. if base class constructors does not any arguments, there is no need of any constructors
       in derived class.
    
    2. but if there are one or more arguments in the base class constructor, derived class need 
       need to pass arguments to the base class constructor
    
    3. if both base and derived class have constructors, base class constructors is executed first.

    4. In multiple inheritance, base classes are constructed in the order in which they appear in 
       the  class declaration
    
    5. In miultilevel inheritance, the constructors are executed in the order of inheritance





    ****************************  Special syntax  ********************************

    1. c++ supports an special synstax for passing arguments to multiple base classes
    the constructor of the deriveed class receives all the arguments at once and then will pass the 
    calls to the respective base classes.

    The boddy is called after all teh constructors are finished executing


    Derived_constructor(arg 1 , arg2, arg3,......): Base1_constructor(arg1,arg2), Base2-constructor(arg3,arg4){

        ...

    }Base1_constructor(arg1,arg2)




    *************************** special case of virtual base class **************************

    1. The constructor for vitual base classed are invoked before an nonvirtual base class

    2. If there are multilevel virtual base classes, they are involed in the order declared

    3. Any non-virtual base class are then constructed before derived calss constiuctor is 
       executed.
    
*/




#include <iostream>
using namespace std;
int main()
{
    
    return 0;
}