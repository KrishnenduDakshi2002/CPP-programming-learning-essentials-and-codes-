
/**
    the directives #ifdef and #ifndef provide an altenative short for combining #if with defined
    operator
    
    #if defined(macro_name)  --->   #ifdef macro_name
    #if !defined(macro_name)  -->  #ifndef macro_name
    
    Syntax ::
    #ifdef macro_name
            ...statement
    #endif
    
    if the macro_name is defined with #define directive then the statement in between #ifdef and 
    #endif will be compiled, If the macro_name has not defined or was undefined using #undef then 
    these statement are not compiled.

    Syntax for #ifndef
    #ifndef macro_name
            statment
    #endif

    if the macro_name has not been defined using #define or was undefined  using #undef
    , then the statements in between #ifndef and #endifare compiled, if the macro_name has been defined,
    then these statements are not compiled.



    */
#include <iostream>
using namespace std;

// program to undrestand the use of #ifdef directive

#define FLAG

int main()
{
    int a =20, b= 4;
    #ifdef FLAG
        cout<<"FLAG is defined !!!"<<endl;
        a++;
        b++;
    #endif

    cout<<"The values of a and b are "<<a<<" and "<<b<<endl;
    cout<<"program to undrestand the use of #ifdef directive, is completed !!"<<endl;
    
    return 0;
}