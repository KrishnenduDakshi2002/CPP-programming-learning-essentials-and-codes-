#include <iostream>
#include <fstream>
#include <cstring>

/*
    the useful classes for working with in c++ are :
    1. fstreambase
    2.ifstream  --> drerived from fstreambase   ---> for read
    3.ofstream  --> derived from fstreambase  ---> for write
    
    in order to work with files in c++, you will need to open it, primarilly, there are 2 ways to open
    1. using the constructor
    2. using the member function open() of the class
    
*/

using namespace std;




int main()
{
    string str = "I am krishnendu Dakshi";
    string str1;
    ofstream output_obj("#2.b_tutorial_test_file.txt"); // here ofstream is class and output_obj is the object of this class
    output_obj<<str;
    ifstream input_obj("#2.a_tutorial_test_file"); //// here ifstream is class and input_obj is the object of this class
    //input_obj>>str1;   // this will give me the first word of the file 
    getline(input_obj , str1); // this will give the whole sentence of that file
    cout<<str1;


    return 0;
}
