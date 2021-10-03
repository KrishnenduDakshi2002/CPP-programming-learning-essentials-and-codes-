#include <iostream>
using namespace std;

int fibonacci_series(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    return fibonacci_series(n-1) + fibonacci_series(n-2);
}

int main()
{
    int num;
    cout<<"enter your number :";
    cin>>num;
    cout<<fibonacci_series(num);
    
    return 0;
}