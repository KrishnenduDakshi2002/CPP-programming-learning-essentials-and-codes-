#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;




int main()
{
    string name;
    //connecting our filie with hout stream
    ofstream hout("#3.a_tutorial_test.txt");  // this will open a file for me
    cout<<" Enter your name "; // here this statement is displayed in terminal
    getline(cin, name);  // user input, name
    hout<<"My name is :"+ name;  // writing to the open file

    hout.close(); // closing file // then link is now disconnected

    ifstream hin("#3.a_tutorial_test.txt");
    string content;
    getline(hin , content);
    cout<<"The content of this file :"<<content;
    hin.close();




    
    return 0;
}