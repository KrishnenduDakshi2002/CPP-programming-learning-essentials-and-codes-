
//Nesting of member functions



#include <iostream>
#include <string>

using namespace std;

class binary{
    string s;
    public:
        void read(void);
        void check_binary(void);
        void swap_indices();
        void display();
};
void binary ::read(void)
{
    cout<<"enter a binary number : ";
    cin>>s;
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
    binary b;
    b.read();
    b.check_binary();
    b.swap_indices();
    b.display();

    
    return 0;
}