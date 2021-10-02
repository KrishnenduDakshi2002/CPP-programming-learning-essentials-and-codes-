#include <iostream>
#include<string>

using namespace std;

typedef struct employ    // using typedef to create emp datatype for 
                        // for convenience for ourself
{
    float salary;
    char name[20];
    long ID;
    
}emp;

int main()
{
    emp e1={12200.34, "krish",1234343};
    cout<<e1.salary<<endl;
    cout<<e1.name<<endl;
    cout<<e1.ID<<endl;
    return 0;
}