

/*
    create 2 classes:
    1. simple calculator::takes input of 2 numbers using a utility function and perform +,-,*,/
    and displays the results
    2. scientific calculator:: takes input of 2 numbers using a utility function and perform +,-,*,/
     and performs any four scientific operations of your choice and displays results

    create another class hybride calculator and inherit it using these 2 classes,
    create an object of Hybride Calculator and display rsults of simple and scientific calc.


    Q1. what type of inheritance arre you using?
    Q2. which mode of inheritance are you using?
    Q3. how is code reusability implemented?
    */
#include <iostream>
#include <cmath>



using namespace std;

const double pi = acos(-1);

class simple_calc{
    protected:
         int a,b,c;

    public:
    // operations for simple calculator
        void addition(){ cout<< "Addition of a and b is ::  "<< a+b<<endl;}
        void substraction(){ cout<< "Substaction of a and b is ::  "<< a-b<<endl;}
        void multiplication(){ cout<< "Multiplication of a and b is ::  "<< a*b<<endl;}
        void division(){ cout<< "Division of a and b is ::  "<< a/b<<endl;}
        void modulo(){ cout<< "Reminder of a and b is ::  "<< a%b<<endl;}
    // some other mothods for all classes
        void operations_from_calc();
        void set_value(float, float);
        void set_value(float);
};
//defining for all classes
void simple_calc::set_value(float x , float y)

{
    a=x;
    b=y;
}



void simple_calc::set_value(float x)

{
    c=x;

}


class scientific_calc: public simple_calc{
    
    public:
    void exponential_powAB(){cout<<"Exponential value of a^b : "<<pow(a,b)<<endl;}
    void exponential_powBA(){cout<<"Exponential value of b^a : "<<pow(b,a)<<endl;}
    void sine(){cout<<"sine value of a is :"<<sin((pi/180)*a)<<endl;}
    void cosine(){cout<<"cosine value of a is :"<<cos((pi/180)*a)<<endl;}
    void tangent(){cout<<"Tangent value of a is :"<<tan((pi/180)*a)<<endl;}
    void gamma_function(){cout<<"Gamma function value of a is :"<<tgamma(a)<<endl;}
    void cubeRoot(){cout<<"cube root of input is :"<<cbrt(c)<<endl;}
   
};


// assuming that hybride calculator can only do addition and sine and logrethmic operations
class hybride_calc : public scientific_calc{

    public:
        void logarithm(){ cout<< "Logarithmic of a is :: "<< log10(a)<<endl;}
};


int main()

{
    simple_calc  simpCalc;
    simpCalc.set_value(10,4);

    simpCalc.modulo();

    scientific_calc sciCalc;
    sciCalc.set_value(11,4);

    sciCalc.addition();

    hybride_calc hybCalc;
    hybCalc.set_value(100,4);  //function overloading
    hybCalc.set_value(27);
    hybCalc.logarithm();
    hybCalc.cubeRoot();

    
    return 0;
}