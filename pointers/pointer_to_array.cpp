/*
    https://www.youtube.com/watch?v=ibj_AKOxpHo

    reference for pointer to an array
    
*/


#include <iostream>

using namespace std;

int main()
{
    int *p;
    int(*ptr)[5];
    int *Ptr;
    int arr[5] = {10, 20, 30, 40, 50};
    
    p = arr;   //---> these means we are passing the address of 
    
    // first element of this array
    
    ptr = &arr; // >>> here we are giving address of whole array
    
    // not just the first element 
    /*
        if we imagine a two dimensional array (Arr)
        by using   
                  *Arr  --> gives the  1st element of 1st 1D array
            but  &*Arr or Arr  --> gives us the address of 1st 1D array 
        */
    Ptr = *ptr;  // >>> (*ptr == *&arr), (*ptr) gives the address of first
                // element of the array

    for (int i = 1; i <= 5; i++)
    {
        
        cout << i <<" element of array is :" << *Ptr << endl; // >>>(*Ptr == **ptr)
        Ptr++; // >>> increamenting the pointer which points to 
               // address of the first element of this array.
        
    }
    
    return 0;
}