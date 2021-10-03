#include <iostream>
using namespace std;

// step by step procedure for factorial(3)
/*
    factorial(3)= 3* factorial(2);--->then it will go for factorial(2)
    factorial(2)= 2* factorial(1); ---> value of factorial(1) is already defined */ 
    
long factorial(int n){
    if(n==0 || n==1)  // we have to set a base condition
    {
        return 1;
    }
    else
    return n *factorial(n-1);
}
int main()
{
    int num;
    cout<<"enter your number :";
    cin>>num;
    cout<<factorial(num);
    
    
    return 0;
}