// https://www.youtube.com/watch?v=Tk-4KUoatg8&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=27

#include <iostream>
using namespace std;


//forward declaration of class complex
class complex;
// declaration of calculator before complex class 
class calculator
{
     public:
        int add(int a, int b)
        {
            return (a+b);
        }
        int sumReal_part(complex , complex );
        int sumComplex_part(complex , complex );
        
        //declaring the method, we can't define here
        // because compilar doesn't know about o1,o2
        //variables
       
};


class complex{
    int a,b; 

    //indivisually declaring functions as friends
    //declaring calculator as a friend of complex
    friend int calculator ::sumReal_part(complex o1, complex o2);
    friend int calculator ::sumComplex_part(complex o1, complex o2);
    
   


    //Aliter : delaring the entire calculator class as friend
    
    friend class calculator;
    //now any methods inside calculator can access private data of complex
    
    public:
    
    void setdata(int complex1 , int complex2)
    {
        a=complex1;
        b=complex2;

    }

    void print_complex(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }

};

//defining calculator method here
// now compilar know about o1, o2 variables
int calculator :: sumReal_part(complex o1, complex o2)
        {
            return (o1.a + o2.a);

        }
int calculator :: sumComplex_part(complex o1, complex o2)
        {
            return (o1.b + o2.b);

        }

int main()
{
    complex c1,c2;
    c1.setdata(1,2);
    c2.setdata(2,4);
    
    calculator calc;
    int res = calc.sumReal_part(c1,c2);
    int res1 = calc.sumComplex_part(c1,c2);

    cout<<"Real part : "<<res<<endl;  //only prints real part
    cout<<"Complex part : "<<res1<<endl;  //only prints real part

    return 0;
}