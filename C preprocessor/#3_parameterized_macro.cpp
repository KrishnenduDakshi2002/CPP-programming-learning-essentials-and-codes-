/*
    General syntax ::
    #define macro_name(part1 , part2 , ....)  macro_expansion 
    
    here part1, part2,...  are the formal parameters,
    this formal parameters replaced by real arguments


*/
#include <iostream>
#include <cmath>
#define EXPONENTIAL(x,y)  pow(x,y) //parameterized macro
#define ADDTION(x,y) ((x)+(y))
using namespace std;




int main()
{
    int a = EXPONENTIAL(10,2);
    cout<<"The value of exponential is :"<<a<<endl;

    int b = ADDTION(10,12);
    cout<<"The value of addition  is :"<<b<<endl;
    
    
    return 0;
}