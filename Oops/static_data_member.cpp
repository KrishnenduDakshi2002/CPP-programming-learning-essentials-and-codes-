#include <iostream>
using namespace std;
class Employee{

    int id;
    //int count;    // here can't flow the updaated count
                    // through all objects

    static int count; // it's a static variable // default value = 0
    // static variables are also called class variables

    // it's a propertiy of class 
    // this data member is shared by all objects

    
    public:
        void setData()
            {
                cout<<"Enter the ID of Employee :"<<endl;
                cin>>id;
                count++;
            }
        void getData()
        {
            cout<<"ID is : "<<id<<" and this is employee no. :"<<count<<endl;
        }
};
int Employee :: count;// if we want to initialize from something else
// then 
// int Employee :: count = 1000;  // initialize by 1000.


int main()
{
    Employee krish;
    krish.setData();
    krish.getData();
    
    Employee Ram;
    Ram.setData();
    Ram.getData();
    
    return 0;
}