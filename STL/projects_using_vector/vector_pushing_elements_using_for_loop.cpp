#include <iostream>
#include <vector>
#define NEWLINE cout<<endl;
using namespace std;

void display(vector<int> &vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout<<vec.at(i)<<" ";
        //both lines are same

        //cout<<vec[i]<<" ";
    }
    
}




int main()
{
     vector<int> vec1 ;

    //cout<<vec1.size();
    int size =6;
    int element[size];
    for (int i = 1; i < size; i++)
    {
        element[i] = 2*i;
    }
    
    for (int i = 1; i < size; i++)
    {
        //cout<<" enter element for "<<i<<" position ";
        /* code */


        vec1.push_back(element[i]);


    }
    display(vec1);
    
    return 0;
}