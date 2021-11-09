#include <iostream>
using namespace std;
class base{

    // protected can be defined as hybride of public and private
    // it can be inherited to derived class as well as it cann't be directly accessed from driver code
    protected:     // protected is kinda private variable which can be inherited to derived class
        int a; 
    private: 
        int b;

};
/*
  For a derivation from base class to derived class
  
  |                       public derivation           private derivation          protected dericvation
  
  1. private members        Not inherited                 not inherited               not inherited
  2. Protected members      protected                     private members             protected      
  3. public members         public                        private members             protected
  */
class derived : protected base{

};



int main()
{
   
    return 0;
}