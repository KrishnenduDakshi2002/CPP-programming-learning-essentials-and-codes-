
/// C++ --> initially called C with classes by Stroustroup


#include <iostream>
using namespace std;
class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int num1,int num2,int num3);// function decleration
        // function can be implimented here
        // or later
        void getData()// like here we are defining function  
        {
            cout<<"The value of a is :"<<a<<endl;
            cout<<"The value of b is :"<<b<<endl;
            cout<<"The value of c is :"<<c<<endl;
            cout<<"The value of d is :"<<d<<endl;
            cout<<"The value of e is :"<<e<<endl;

        }
};

void Employee ::setData(int num1,int num2,int num3)
{
    a = num1;
    b = num2;
    c = num3;

}
int main()
{
    Employee krish;  // krish is object of Employee class
    
    //krish.a = 19;  //---> will throw error
    //we Can't access a,b,c because they are private variables
    krish.d=krish.e=10; // because d , e  are public variables
    // that's why we can access them from main()
    krish.setData(1,2,3);
    krish.getData();
    
    return 0;
}