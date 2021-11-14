#include <iostream>
#define FLAG
using namespace std;




int main()
{
    int a =20, b= 4;
    #ifdef FLAG
        cout<<"FLAG is undefined !!!"<<endl;
        a++;
        b++;
    #endif
    #undef FLAG   // we undefine the macro FLAG here
    #ifdef FLAG   // now macro cann't be invoked here
        cout<<"Preprocessor!!!"<<endl;
        a++;
        b++;
    #endif
    

    cout<<"The values of a and b are "<<a<<" and "<<b<<endl;
    cout<<"program to undrestand the use of #ifdef directive, is completed !!"<<endl;
    
    
    return 0;
}