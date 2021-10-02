#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"tell me your age :";
    cin>> age;
    if(age<18)
    {
        cout<<"you are not allowed";
    }
    else{
        cout<<"you are allowed";
    }
    return 0;
}