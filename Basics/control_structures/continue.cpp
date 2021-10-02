#include <iostream>

using namespace std;

int main()
{
     for (int i = 0; i < 10; i++)
    {
        /* code */
        if(i==3){
            continue;
        }
        cout<<"for loop result :"<<i<<endl;
        
    }

    return 0;
}