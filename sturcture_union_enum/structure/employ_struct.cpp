#include <iostream>
#include<string>

using namespace std;

 struct employ    // using typedef to create emp datatype for 
                        // for convenience for ourself
{
    float salary;
    char name[20];
    long ID;
    
};

int main()
{
    struct employ e1;
    e1.salary=1222.34;

    char source[]="krishnendu Dakshi";
    strcpy(e1.name,source);  //e1.name is our target and source is krishnendu Dakshi
    
    e1.ID=123456;

    cout<<e1.salary<<endl;
    cout<<source<<endl;
    cout<<e1.ID<<endl;
    return 0;
}