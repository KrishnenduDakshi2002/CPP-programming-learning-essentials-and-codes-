/*
    start with #if and #endif 

    #if constant_expression
            ........
            statements
            ........
    #endif
    
*/

#include <iostream>
#define SCORE 10
using namespace std;




int main()
{
    int a = 20, b=4;
    #if SCORE >=5
        cout<<"the value of score is greater than equal to 5"<<endl;
        a=a+b;
        b= a*b;
        cout<<"The values of a and b is changed now !! "<<endl;
    #endif

    cout<<"the value of a and b is "<<a<<" and "<<b<<endl;
    cout<<"program is now executed completely .";
    
    return 0;
}