/*
    functions are two types 
        >> library function
        >> user defined function
    >>> library function (cout, cin) from <iostream>library
    >>> user defined function(what we are doing here)
    
    syntax for function
       type function_name(parameter declarations)
       
       void sum(void);   ---> a void fucntion
       void sum();       ---> is also void fucntion
       
       
       >>> a function can return int,char,pointer or nothing
*/
#include <iostream>

using namespace std;


int sum(int a, int b); //---> function declaration

/*
 >> A function declaration is used to give specific information 
  to the compiler about the function so that it can check
  the function call in the main function
  
 >> calling function needs information about the called function
 
 >> if defination of a function is placed before main function 
    then no need to declare fucntion before main fn.
 */
int main()
{
    int a,b;
    cout<<"first value :";
    cin>>a;
    cout<<"second value :";
    cin>>b;
    /*
        in sum function only a copy of a,b 
        is transferred not the real value
        so we can't change value of a,b from the function
    */
    
    cout<<"sum is : "<<sum(a,b); //-->function call
    
    // here a,b are actual parameters
    
    return 0;
}
int sum(int a, int b) //>>> function defination
// >>> here a,b are variables of this
// >>> here a,b are formal parameters 
// >>> formal variables take value from actual variables
{  
     
    int c =a+b;       //>>>  function, no relation with main
    return c;         //>>> function's  a,b variables
    
}



