#include <iostream>
#include <stdlib.h>
using namespace std;




int main()
{
    int arr[4] = {3,67,23,890};
    int number_elements = sizeof(arr)/sizeof(int);
    srand(time(NULL));
    cout<< arr[rand()%(number_elements)];



    return 0;
}