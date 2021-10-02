
//**************** call by reference ************

#include <iostream>

using namespace std;

void swap(int *a , int *b);

int main()
{
    int num1,num2;
    num1=2;num2=8;
    swap(&num1,&num2);

    cout<< num1 << num2;
    return 0;
}
void swap(int *a , int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}
