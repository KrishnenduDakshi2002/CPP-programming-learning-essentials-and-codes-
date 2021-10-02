#include <iostream>

using namespace std;
int *return_pointer(int *ptr,int n)
{
    ptr = ptr +(n-1); // here ptr is a pointer which stores the address
    // of first element of the array
    return ptr;

}

int main()
{
    int arr[5]={2,8,6,3,5};
    int a;
    cout<<"Which element of the array do you need :";
    cin>> a;
    int *Ptr = return_pointer(arr,a);  // Ptr is a pointer which stores 
    // pointer from the function return_pointer
    cout<<"Address of element, you want is :"<<return_pointer(arr,a)<<endl;
    cout<<"value of element, you want is : "<< *Ptr;
    
    return 0;
}