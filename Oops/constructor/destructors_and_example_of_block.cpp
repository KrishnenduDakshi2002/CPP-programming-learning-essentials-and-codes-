/*
    Destructor is an instance member function which is invoked
    automatically whenever an object is going to be destroyed.
    Meaning, a destructor is the last function that is going to
    be called before an object is destroyed.  
*/

#include <iostream>
using namespace std;
class num{
static int count;
    public:
        num()//constructor
        {
            count++;
            cout<<"This is the time when constructor is called for object number :"<<count<<endl;   
        }
        ~num()// destructor
        {
            cout<<"this is the time when my destructor is called for object :"<<count<<endl;
            count--;
        }
    // when compiler realise that, a particular object is no longer needed, then compiler invoking 
    // destructor
    // it will destruct that object


};
int num :: count =0;
int main()
{
    cout<<"we are inside of our main function"<<endl;
    cout<<"creating first object n1"<<endl;

    num n1;
    // we can write anything inside a block but when 
    // compiler exit the block it wil destroy everything
    // inside the block.
    {
        cout<<"entering this block!!"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block!!"<<endl;
    }
    cout<< "back to main"<<endl;


    
    return 0;
}