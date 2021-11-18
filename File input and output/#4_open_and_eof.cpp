#include <iostream>
#include <fstream>
using namespace std;




int main()
{
    ofstream output_obj;
    output_obj.open("#4_hello.txt");
    output_obj<<"hello i am krishnendu dakshi"<<endl;
    output_obj<<"I am college student in kalyani govt engineering college "<<endl;
    output_obj.close();

    ifstream input_obj;
    string str;
    input_obj.open("#4_hello.txt");
    // getline( input_obj , str);
    // cout<<str;
    // input_obj.close();



// this is using eof()
    while(input_obj.eof()==0)
    {
        getline(input_obj,str);
        cout<<str<<endl;
    }


    
    return 0;
}