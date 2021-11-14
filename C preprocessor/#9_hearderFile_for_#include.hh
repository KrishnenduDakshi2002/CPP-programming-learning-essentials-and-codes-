
/*
    example for how to create own header file in c and C++ 
    for C ---> save that file with this name-> filename.h
    for C++ ---> save that file with this name -> filename.hh

    to include that header file into our source code 
    for C   ->#include "filename.h"
    for C++ ->#include "filename.hh"
    
    */

using namespace std;
int a,b;

void addition(int a, int b)
{
    cout<<"The addition of two numbers is :"<<a+b<<endl;
}