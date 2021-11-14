
#include <iostream>
using namespace std;
#define SHOW(var,format) cout <<#var " is a "#format " type number ."<< endl;

int main()
{

    SHOW(4,integer);
    return 0;
}