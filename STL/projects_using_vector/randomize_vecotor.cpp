#include <iostream>
using namespace std;




int main()
{
    int size =10;
    int Random[size];
    srand(time(NULL));
    
    
    for (int i = 0; i <size; i++)
    {
        Random[i]=rand()%100 +1;
    }
    
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<Random[i]<< " ";
    }
    
    
    return 0;
}