#include <iostream>
#include <vector>
#define NEWLINE cout<<endl;
using namespace std;

void display(vector<int> &vec)
{
    cout<<"Before swaping vector"<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout<<vec.at(i)<<" ";
        //both lines are same

        //cout<<vec[i]<<" ";
    }
    
}
void Swap(vector<int> &vec)
{
    int arr[(int)(vec.size())/2];
// for storing part of vector
    for (int i = 0; i < ((vec.size())/2); i++)
    {
        arr[i] = vec[i];

    }
// for swaping elements
    for (int i = 0; i < ((vec.size())/2); i++)
    {

        vec[i]= vec[vec.size()-i-1];

    }
//assinging value to rest elements
    for (int i = 0; i < ((vec.size())/2); i++)
    {

        vec[vec.size()-i-1] = arr[i];

    }

}
void display_swap_vector(vector<int> &vec)
{
    cout<<"After swaping vector "<<endl;
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
    int element;
    int size =6;
    for (int i = 0; i < size; i++)
    {
        cout<<" enter element for "<<i<<" position ";
        /* code */

        cin>>element;
        vec1.push_back(element);
    }
    // display(vec1);
    // NEWLINE
    // vec1.pop_back();
    // cout<<vec1.size();
    display(vec1);
    NEWLINE

    Swap(vec1);
    display_swap_vector(vec1);

    return 0;
}