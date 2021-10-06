
/*
    just like the static data members or 
    static variables inside the class,
    static member functions also does not
    depend on object of class.


    static member function are only allowed
    to access  only the static data member 
    or other static functions, can't acces 
    non-static data members or functions of
    the class.
*/


#include <iostream>
using namespace std;
class count{
    static int Num_count;   // static keyword is only applicable in class
    public:
        static void display_count(); // declare static function 
};
int count:: Num_count =1000;
void count::display_count() // defination of static function
{
    cout<<Num_count;

}
int main()
{
    count::display_count(); // we can call static function without 
    //creating any objects
    
    return 0;
}