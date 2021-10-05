/*
    Function overloading is a feature of object oriented programming where two or more 
    functions can have the same name but different parameters.
    When a function name is overloaded with different jobs it is called Function Overloading.
    In Function Overloading “Function” name should be the same and the arguments should be different.
    Function overloading can be considered as an example of polymorphism feature in C++.
    Following is a simple C++ example to demonstrate function overloading.




    *************** How  Function Overloading works? ******************
i)      Exact match:- (Function name and Parameter)
ii)          If a not exact match is found:–
               ->Char, Unsigned char, and short are promoted to an int.

               ->Float is promoted to double

iii)         If no match found:
               ->C++ tries to find a match through the standard conversion.

ELSE ERROR 🙁

*/



#include <iostream>

int mathematical_operations(int a, int b){  //(1) function with 2 arguments
    int c; 
    return c=a+b;
}
int mathematical_operations(char a, int b){  //(2) function with 2 arguments
    int c; 
    return c=a+b;
}
int mathematical_operations(int a, int b,int c){  // function with 3 arguments
    int d; 
    return d=a+b+c;
}



using namespace std;
int main()
{
  // every execution is performed in order of fucntion calling
    cout<<mathematical_operations(1,2)<<endl; // calling (1) function with 2 arguments
    cout<<mathematical_operations(10,2)<<endl; // calling (2) function with 2 arguments
    // char a in (2) funtion is prommoted to int a because teh argument in the call isn't 
    // a character
    cout<<mathematical_operations(1,2,3)<<endl; // function with 3 arguments
    

    
    
    
    
    return 0;
    
}