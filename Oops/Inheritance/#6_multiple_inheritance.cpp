
/* 
    
    syntax for multiple inheritance ::

    class {{derived class name}} : visibility-mode {{base1}}, visibility-mode {{base2}}
    {
        // code ....
    };

*/
#include <iostream>
using namespace std;
class base1{
    protected:
        int base1_int;
    public:
        void set_base1_int(int a)
        {
            base1_int=a;
        }
};
class base2{
    protected:
        int base2_int;
    public:
        void set_base2_int(int a)
        {
            base2_int=a;
        }
};


class derived: public base1, public base2{

    public:
        void show()
        {
            cout<<"The value of base1 is "<<base1_int<<endl;
            cout<<"The value of base2 is "<<base2_int<<endl;
            cout<<"The sum of base1 and base2 is "<<base1_int+base2_int<<endl;

        }
};
  /*
   The generated derived class will look like this::
   

    Data members::
        base1_int----->protected
        base2_int----->protected

    Member functions::
        set_base1_int---->public
        set_base2_int---->public
        show---->public

  */


int main()
{
    derived krish;
    krish.set_base1_int(2);
    krish.set_base2_int(4);
    krish.show();
    return 0;
}