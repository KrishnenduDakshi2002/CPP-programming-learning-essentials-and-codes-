#include <iostream>
#include <list>
#include <vector>
#include <stdlib.h>


using namespace std;
//method for setting values to lists
void setValue(list<int> &lst, int size)
{
    int element;
    for(int i = 0; i< size; i++)
    {
        cout<<" Enter elements to list ::";
        cin>>element;
        lst.push_back(element);

    }

}
// methods for displaying values within lists
void display(list<int> &lst)
{
    list<int> :: iterator itr;
    for(itr= lst.begin();itr!=lst.end();itr++)
    {
        cout<< *itr<<" ";
    }
    cout<<endl;
}

// for displaying vector
void display_vector(vector<int> & vec)
{
    for (int  i = 0; i <vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
}

void transfer_elements(list<int> &lst , vector<int> &vec)
{
    //random generator code
    srand(time(NULL));
    int size_array =5;
    int arr[size_array];
    //list
    list<int> :: iterator itr,itr1;
    itr = lst.begin();
    itr1 = lst.begin();

    
    
    int i = 0;
    for(itr=lst.begin();itr!=lst.end();itr++) // in this we can write code for displaying element for both
    // list and vector
    {       
        
        arr[i] = *itr;

        i++;

    }
    for (int i = 0; i < size_array; i++)
    {
        vec.push_back(arr[rand()%5]);
    }
    
}


int main()
{
    list<int> list1;
    list<int> :: iterator itr;
    vector<int> vec1;
    int element;
// size of list
    int size =10;
   
// Displaying list
    setValue(list1,size);
    cout<<" Displaying list...."<<endl;
    display(list1);
   
// displaying vector
    transfer_elements(list1,vec1);
    cout<<" Displaying vector...."<<endl;
    display_vector(vec1);

    list1.merge(list1);

    
    return 0;
}