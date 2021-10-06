
//Nesting of member functions



#include <iostream>
#include <string>

using namespace std;

class binary{        // class --> keyword , binary --> user defined name

    string s;        // by default all data member is private
    // data member 
    public:          // Access modifier(public,private,protected)
        void read(void);        // all of these called member functions
        void check_binary(void);  
        void swap_indices();
        void display();
};
/*
Method -->A method is a collection of statements that perform 
some specific task and return result to the caller.
A method can perform some specific task without returning anything.
and written in btw parenthesis.
*/
void binary ::read(void)    //defination of member function

{
    cout<<"enter a binary number : ";  // this is called methods
    cin>>s;                            //
}
void binary ::check_binary(){
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format";
            exit(0);
        }

    }
    
}
void binary ::swap_indices()
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)=='0')
        {
           s.at(i)='1';
        }
        else if(s.at(i)=='1')
        {
           s.at(i)='0';

        }
        

    }
} 
void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);

    }
} 
int main()
{
    //driver program
    binary b;     // b is a object of binary class
    b.read();
   
   // b.check_binary(); 
   
   /* 
   instead of calling function here we can call 
   this function in other functions,so user don't have to do anything

    check_binary() is defined in swap_indices() function
    ----> it's called Nesting of member function
   */
    b.swap_indices();
    b.display();

    
    return 0;
}