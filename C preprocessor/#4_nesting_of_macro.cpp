
/*
    one macro can be used for defining another macro name i.e. the macro expansion can also contian
    the name of another macro
*/
#include <iostream>
#include <cmath>

#define PI acos(-1)
#define PI_SQUARE PI*PI
using namespace std;




int main()
{
    cout<<"The value of Pi square is :"<<PI_SQUARE<<endl;
    
    return 0;
}