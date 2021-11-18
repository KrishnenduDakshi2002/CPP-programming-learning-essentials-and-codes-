
#define NEWLINE cout<<endl;
#include <iostream>
using namespace std;

// float function_avg(int a, int b)
// {
//     float avg = (float)(a+b)/2;
//     return avg;
// }

// float function_avg1(int a, float b)
// {
//     float avg = (a+b)/2;
//     return avg;
// }

// *********** instead of doing the above mess ***************
/*
    please go through the above function defiantions to understand better
*/

/////////////// for avgerage //////////////////
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (float)(a+b)/2;
    return avg;
}
/////////////for swaping two numbers //////////////
template <class T>

void Swap(T &a, T&b)
{
    T temp;
    temp = a;
    a=b;
    b = temp;
    cout<<"the value of a is "<<a<<"  the value of b is "<<b;
    NEWLINE

}

int main()
{
    // float a = function_avg(3,4);
    // cout<<a;
    // NEWLINE
    // float b = function_avg1(3,4.1);
    // cout<<b;


    float a ;
    a = funcAverage(3,4.666);  // here i can give any datatype as i want
    cout<<a;
    NEWLINE

    float b = 3.90033;
    Swap(a,b);

    
    return 0;
}