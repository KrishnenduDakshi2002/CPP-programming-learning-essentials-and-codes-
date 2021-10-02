#include <iostream>

using namespace std;



int sum(int a, int b) 
{  
   static int c =0;  // c is a static variable in the function
   // the inital value will execute only once
   c = c+1; // the value of c will be retained or stored in the function
            // c = 0 +1; // for first function call
            // c = 1+1; // for second fucntion call
    int s =(a+b)*c;       
    return s;         
    
}
int main()
{
    int a,b;
    cout<<"first value :";
    cin>>a;
    cout<<"second value :";
    cin>>b;

    
    cout<<"sum is : "<<sum(a,b)<<endl; // first function call 
    cout<<"sum is : "<<sum(a,b)<<endl; // second function call
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    cout<<"sum is : "<<sum(a,b)<<endl; 
    
    

    
    return 0;
}