
/*
    The preprocessor directive #include is used to include a file into the source code
GENERAL SYNTAX ::
#include<file_name>
#include"file_name"

#include direcitve should not be used to include the contents of other ".cpp"

Include file can be nested i.e. an included file can contain another #include directive

*/

#include <iostream>
#include "test.hh"  // my own header file 

using namespace std;




int main()
{

    addition(2,3); // from test.hh header file
    
    return 0;
}