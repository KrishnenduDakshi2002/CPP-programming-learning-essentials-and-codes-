
/*
    Syntax for Innitialization list in cosntructor:

    Constructor (argument_list) : initialization_section
    {
        assigment + other-code
    }


### it is use to quickly initailize values to data members of class

    EXAMPLE:::

    class test{
        int a;
        int b;

        public:
            test(int i, int j) :a(i),b(j)
            {constructor_body}  
    }
    
    ####//----> the abover line of code can be written as below
        
        public:
            test(int i, int j)
            {
                a=i;
                b=j;
            }
    ####// -----> but initialization list much more easy

        //if we write like this
            test(int i, int j): a(i),b(i+j) // it is also valid to write b(i+j)
            {
                .....body......
            }
*/

#include <iostream>
using namespace std;

class test{
        int a;
        int b;

        public:
            //test(int i, int j) :a(i),b(j)   //valid
            //test(int i, int j) :a(i),b(2*j) //valid
            //test(int i, int j) :a(i),b(a+j) //valid
            //test(int i, int j) :a(i),b(a+j) //valid
            //test(int i, int j) :b(j),a(b+i) //valid but gives garbage value, because a should be initialize first

            test(int i, int j) :a(i),b(j)
            {
                cout<<"Constuctor excuted !!!"<<endl;
                cout<<"Value of a is "<<a<<endl;
                cout<<"Value of b is "<<b<<endl;
            }  
    

};
int main()
{
    test krish(10,3);
    
    return 0;
}