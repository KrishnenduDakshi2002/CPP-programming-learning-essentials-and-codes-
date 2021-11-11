#include <iostream>
using namespace std;
int main()
{
    //Basic Example

    int a =4 ;
    int* ptr = &a;

    cout<<"The value of a is "<< *(ptr)<<endl;

    // New Keyword
    {
    
    int *p = new int (40); // another example:: {{ float *p = new float(233.09)}}


    cout<<"The value at address p is "<< *(p)<<endl;
    
    }

    int *arr = new int[3]; // create contiguous memory blocks
    
    arr[0] =10;
    arr[1] =20;
    arr[2] =30;

    cout<<"the value of arr[0] is :"<<arr[0]<<endl;
    cout<<"the value of arr[0] is :"<<arr[1]<<endl;
    cout<<"the value of arr[0] is :"<<arr[3]<<endl;

    // delete keyword

    // syntax ::
    // delete {{ var_name}};

    int *arr = new int[3];
    
    arr[0] =10;
    arr[1] =20;
    arr[2] =30;
    delete [] arr; // it will delete or free contiguous memeory blocks

    cout<<"the value of arr[0] is :"<<arr[0]<<endl;
    cout<<"the value of arr[0] is :"<<arr[1]<<endl;
    cout<<"the value of arr[0] is :"<<arr[3]<<endl;


    return 0;
}