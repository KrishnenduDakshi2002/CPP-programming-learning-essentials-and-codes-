#include <iostream>

using namespace std;



int sum(int a, int b) // inline function
{  
    int q =1;
    int c =a+b+q;       
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
 
    
    

    
    return 0;
}