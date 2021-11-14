#include <iostream>
using namespace std;

#define ADDITION(DATA_TYPE , FUNCTION_NAME)  DATA_TYPE FUNCTION_NAME(DATA_TYPE a , DATA_TYPE b){ return a+b;}

ADDITION(int , int_addition) // DATA_TYPE = int , FUNCTION_TYPE =  int_addition

int main()
{
    int p = int_addition(3,4); // a= 3, b= 4
    cout<<"The value of addition is :"<<p<<endl;
    
    return 0;
}