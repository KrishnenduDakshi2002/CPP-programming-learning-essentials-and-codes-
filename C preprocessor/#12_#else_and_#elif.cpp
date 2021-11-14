/*
    #else is used with #if preprocessor directive, it is anologous to if_else statement
    The syntax is ::
    #if 
        statement
    #else
        statment
    #endif
*/

#include <iostream>
#define SCORE 2 // change this value in between 0 and 5 or any number to see results
 // depending on this value #if or #else will be executed
using namespace std;




int main()
{
    int a =10 ;
    float b= 10;
    #if SCORE <= 5 && SCORE >3
        cout<< "#if is executed here !!!"<<endl;
        cout<<"The value of SCORE is greater than equal to 5"<<endl;
        a = a+b;
        b = a*b; // a =20 * b=10
    #elif SCORE <=3 && SCORE >0
        cout<< "#elif is executed here !!!"<<endl;
        cout<<"The value of SCORE is greater than 0 and less than 3"<<endl;
        a = a/b;
        b = (float)a/b; // a =20 * b=10

    #else
        cout<< "#else is executed here !!!"<<endl;
        cout<<"The vlaue of score is less than 5"<<endl;
        a = (10*a)+(10*b);
        b = a * b;

    #endif
        
        
        
        cout<< "The value of a and b is now changed !!"<<endl;
        cout<<"The value of a and b is :"<<a<<" and "<<b<<endl;
        cout<<"the is program is executed !!!"<<endl;
        
    return 0;
}