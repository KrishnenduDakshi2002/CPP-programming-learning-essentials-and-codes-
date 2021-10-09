#include <iostream>
using namespace std;

class Complex
{
    int a,b ;
    public:
        Complex(int x, int y); // constructor declaration
    void print_complex(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex :: Complex(int x, int y)//paramaterized constructors
//as it takes 2 parameters   
{
    a=x;
    b=y;
}



int main()
{
    //implicit call
    Complex c(4,6);
    c.print_complex();
    
    //explicit call
    Complex C1 = Complex(5,8);
    C1.print_complex();
    
    
    
    return 0;
}

