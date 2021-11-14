#include <iostream>
using namespace std;




int main()
{
   int a =20, b= 4;
    #ifndef MAX
        cout<<"MAX is not defined !!!"<<endl;
        a--;
        b--;
        
    #endif
    
    cout<<"The values of a and b are "<<a<<" and "<<b<<endl;
    cout<<"program to undrestand the use of #ifndef directive, is completed !!"<<endl;
    
    
    
    return 0;
} 