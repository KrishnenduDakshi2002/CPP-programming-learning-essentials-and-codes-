/*
    #define directive allows the definetion of macros within your source code, these macro defination
    allow values to be declared for use throughout your code
    
    You generally use this syntax when creating constants that represent numbers, strings or expressions.

    ::: NOTE don't use semicolon after define, which is a common mistake
    
*/

#include <iostream>
#define INTEGER 10
#define STRING "hello world!!"
#define AGE_mine (10/2)   // return type  integer
#define AGE ((float)10/3) // return type float


using namespace std;




int main()

{

    float flo = 3.000f;
    cout<<"the value of integer is : "<<INTEGER<<endl;
    cout<<"Content in the string  is : "<<STRING<<endl;
    cout<<"My age_mine  is : "<<AGE_mine<<endl;
    cout<<"My age  is : "<<AGE<<endl;

    return 0;
}
