#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    num1=3;
    num2=2;

    //arithmetic operators

    cout<<"num1 + num2 is "<< num1+num2<<endl;
    cout<<"num1 - num2 is "<< num1-num2<<endl;
    cout<<"num1 * num2 is "<< num1*num2<<endl;
    cout<<"num1 % num2 is "<< num1%num2<<endl;
    cout<<"num1 ++  is "<< num1++<<endl;
    cout<<"num1 -- is "<< num1--<<endl;
    cout<<" ++num1 is "<< ++num1<<endl;
    cout<<"--num1  is "<<-- num1<<endl;
    cout<<"num1 / num2 is "<<(float)num1/num2<<endl;

    // assingment operators
    // int a = 12;


    //comparison operators

            /* 1 for true and 0 for false
            gives value in 1 and 0 */ 
    cout<<"num1 == num2 is "<< (num1==num2)<<endl;
    cout<<"num1 != num2 is "<< (num1!=num2)<<endl;
    cout<<"num1 <= num2 is "<< (num1<=num2)<<endl;
    cout<<"num1 >= num2 is "<< (num1>=num2)<<endl;
    cout<<"num1 < num2 is "<< (num1<num2)<<endl;
    cout<<"num1 > num2 is "<< (num1>num2)<<endl;
   
  
  
   //logical operators
    cout<<"(num1==num2)||(num1>num2) is "<<((num1==num2)||(num1>num2))<<endl;
       // if any one, first or second expression is true then it is true. 
    cout<<"(num1==num2)&&(num1>num2) is "<<((num1==num2)&&(num1>num2))<<endl;
    cout<<"!(num1>num2) is "<<(!(num1>num2))<<endl;
    //if (num1>num2) is true then not(!) operator will change that to false


    cout<<endl<<endl;
    cout<<"hello";
    



   
    return 0;
}