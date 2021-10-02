/*
    Inline functions are used to reduce the function call. 
    When one function is being called multiply times in the program
    it increases the execution time, so inline function is used to 
    reduce time and increase program efficiency. 
    
    If the inline function is being used when the function is called,
    the inline function expands the whole function code at the point
    of a function call, instead of running the function. 
    Inline functions are considered to be used when the function is small 
    otherwise it will not perform well. 
    
    >>>   ***** should not be used *******
    
    >>>Inline is not recommended when static variables 
       are being used in the function
    >>> when using recursion 
    >>> when function has loop and switch statement
    
    
    */


#include <iostream>

using namespace std;



inline int sum(int a, int b) // inline function
{  
     
    int c =a+b;       
    return c;         
    
}
int main()
{
    int a,b;
    cout<<"first value :";
    cin>>a;
    cout<<"second value :";
    cin>>b;

    
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    
    

    
    return 0;
}



