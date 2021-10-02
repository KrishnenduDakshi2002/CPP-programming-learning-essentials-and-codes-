#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    for (int i = 1; i <=10; i++) // inputing value to array
    {
        arr[i-1] = (2 * i) + i;
    }
    for (int i = 1; i <= 10; i++) // printing value of array
    {
        cout << "element " << i << ":" << arr[i-1] << endl;
    }

    // pointer points to array's element
    int *ptr= arr;


    for (int i = 0; i < 10; i++) // printing value of array
    {
        cout << "Address of element " << i+1 << ":" << (ptr)<<"  value of element "<<i+1<<":"<<(*ptr) << endl;
        ptr++;
    }

    
     return 0;
}