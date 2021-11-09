#include <iostream>
using namespace std;

//Base class
class employee
{
public:
    int ID;
    float salary;
    employee() {}
    employee(int inpID)
    {
        ID = inpID;
        salary = 34.0;
    }
};
//Derived class syntax

/*
class {{derived- class_name}} : {{visibilty-mode}} {{base-class_name}}
{
    members/ methods/ etc...
};

NOTE :: default visibility mode is private

Private visibility mode :: public memberes of the base class is private
                           members of derived class
public visibility mode :: public memberes of the base class is public
                           members of derived class

NOTE :: but we can't inherit private members of base class into derived class                           
*/

// in general in programming community {{  }} means that, anything within
// {{ }} will be replaced by something else

// crating programmer class derived from employee base class
class programmer : public employee
{
public:
    programmer() {}
    programmer(int inpID)
    {
        ID = inpID;
    }
     int language_code = 9;
    void getdata()
    {
        cout<<ID<<endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    programmer skill(10);
    cout<< skill.ID<<endl;
    cout << skill.language_code<<endl;
    skill.getdata();
    return 0;
}