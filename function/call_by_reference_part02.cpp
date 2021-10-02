
//**************** call by reference part 02************

#include <iostream>

using namespace std;

int & swap(int *a , int *b){    // int &  >>>returns the reference or address 

    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
    return *a;   //>>> *a is deferenced value
                 // but returned as &*a
                 // because we are returning address, we can alter the value 
                 // in main function 
}

int main()
{
    int num1,num2;
    num1=2;num2=8;
    swap(&num1,&num2)=20004;  // here we are altering the value of a with 20004
    cout<<num1;


    return 0;
}
