#include <iostream>
#include <vector>
#include <array>
#define NewLine cout<<endl;
using namespace std;

// display function to displaying all elements in the vector
void display(vector<int> &vec)
{


    for (int i = 0; i < vec.size(); i++)
    {

        cout<<vec.at(i)<<" ";
       
    }
    
}

// method for swaping elements
void Swap_element(vector<int> &vec , int position , int replacement_element)
{
    vector<int> :: iterator iter = vec.begin();
    int count =0;
    vec.insert(iter+count+position-1,replacement_element); // for inserting
    vec.erase(vec.begin()+position); // for erasing elements

}


int main()
{
    vector<int> vec1;
    int element, size_vector;
    int arr[]={20,30,40,50};             //   Array of elements to swaping
    int sizeOfArray = sizeof(arr)/ sizeof(int);
    size_vector = 8;                     // size of vector

// for loop to push elements into vector
    for (int i = 0; i < size_vector; i++)
    {
        /* code */
        cout<< "enter value to vector :: ";
        cin>>element;
        vec1.push_back(element);
    }
// explaination for the next for loop    
    // display(vec1);
    // Swap_element(vec1,2,arr[0]);
    // NewLine
    // display(vec1);
    // Swap_element(vec1,3,arr[1]);
    // NewLine
    // display(vec1);

// code for swaping more than elements in vector   
    for (int i = 0; i <sizeOfArray; i++)
    {
        Swap_element(vec1,i+2,arr[i]); // Swap_element(vec1, {{starting position we want to insert all elements }} , {{elements}})
    }
    // after swaping all elements from the array
    cout<<"after swaping all elements from the array"<<endl;
    display(vec1);
    
    
    
    return 0;
}