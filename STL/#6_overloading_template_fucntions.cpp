#include <iostream>
using namespace std;
#define NEWLINE cout<<endl;
template<class T>
class krish{
    public:
        T data;
        krish(T a)
        {
            data = a;
        }
        void display();
        
};
template <class T>
void krish<T> :: display(){
            cout<<data;
        }


////////////////////////  Template function overloading  ////////////////////

void func(int a)
{
    cout<<"This is regular  function() = " <<a;
    NEWLINE

}
template <class T>
void func(T a)
{
    cout<<"This is template function() = " <<a;
    NEWLINE

}
int main()
{
    krish <int> obj(5);
    cout<<obj.data;
    NEWLINE
    obj.display();
    NEWLINE

/////////////  driver code for template funciton overloading /////////////////

    func(4); // exact match takes the higest pirority // call normal func()
    func<int>(50); // templatized func()
    func(3.333); // because it is not the exact match , it is not a integer // templatized func() is called
    func("string");  // templatized func() // taking input as string


    return 0;
}