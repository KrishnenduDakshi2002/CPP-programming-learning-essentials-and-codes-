#include <iostream>
using namespace std;



/////******* first case for ambiguity***********
class base1{

    public:
        void greet()
        {
            cout<<"How are you!!!"<<endl;
        }
};
class base2{

    public:
        void greet()
        {
            cout<<"kaise ho app!!!"<<endl;
        }
};
class derived: public base1, public base2{
    int a;
    public:
        void greet(){
            base1::greet();
        }
};

/// *************   second case for ambiguity  *************

class B{
    public:
        void say(){
            cout<<"hello world"<<endl;
        }
};
class D: public B{
    public:
        void say(){
            cout<<"hello world, my friends , I am krishnendu Dakshi !!!"<<endl;
        }
};
int main()
{

    // ************ driver code for first case **************
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    // d.greet(); 
    
    //here we don't know which greet method we are calling
    // this type of ambiguitty occurs when two classes have 
    //same method name and they are inheritaed to some class

// now after resolving ambiguity in class derived
    d.greet();


    // ************** driver code for second type of ambiguity ***************
    B obj1;
    D obj2;

    obj1.say();
    obj2.say();
    return 0;
}