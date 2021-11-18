#include <iostream>
#include <vector>
using namespace std;


void display(vector<int> &vec)
{


    for (int i = 0; i < vec.size(); i++)
    {

        cout<<vec.at(i)<<" ";
       
    }
    
}
void Swap_element(vector<int> &vec , int position , int replacement_element)
{
    vector<int> :: iterator iter = vec.begin();
    vec.insert(iter+position-1 , replacement_element);
    vec.erase(vec.begin()+(position));


}





int main()
{
    vector<int> vec1;
    int element, size;
    size = 4;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<< "enter value to vector :: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    
    // cout<<endl;
    // Swap_element(vec1,2,300);
    // display(vec1);

    cout<<endl;
    cout<<"the iteretor is still pointing to the second element of vector"<<endl;
    // the iterator does not move with the number after a element insertion
    // Swap_element(vec1, {{ position at you want to swap element}} , {{ element}});
    Swap_element(vec1,2,90); 
    display(vec1);

    
    
    return 0;
}