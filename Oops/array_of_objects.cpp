#include <iostream>
using namespace std;
class Employee
{
    int ID;
    int salary;

public:
    void setID()
    {
        salary = 122;
        cout << "enter the ID of Employee" << endl;
        cin >> ID;
    }
    void getID()
    {
        cout<<"the ID of this employee is :"<<ID<<endl;
    }
};
int main()
{
    /*
    //if numbers of employes are too much, then this procedure
    // does have managing problems

    Employee krish, harry , Ram ,shruti;
    krish.setID();
    krish.getID();
    


    */
   Employee facebook[4];
   for (int i = 0; i < 4; i++)
   {
       /* code */
       facebook[i].setID();
       facebook[i].getID();

   }


   

    return 0;
}