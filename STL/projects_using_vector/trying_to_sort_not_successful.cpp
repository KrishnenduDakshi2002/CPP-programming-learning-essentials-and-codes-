#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;

void display(vector<int> &vec)
{
    cout<<"Running display function ..."<<endl;

    for (int i = 0; i < vec.size(); i++)
    {

        cout<<vec.at(i)<<" ";
       
    }
    
}
void minimum_number(vector<int> &vec)
{
    int min_number = vec[0];

    for (int i = 0; i < vec.size(); i++)
    {
        if(min_number> vec[i])
        {
            min_number = vec[i];
        }
    }
    cout<<"The least number :"<<min_number<<endl;

}
void maximum_number(vector<int> &vec)
{
    int max_number = vec[0];

    for (int i = 0; i < vec.size(); i++)
    {
        if(max_number< vec[i])
        {
            max_number = vec[i];
        }
    }
    cout<<"The highest number :"<<max_number<<endl;

}



int main()
{
    
    
    vector<int> vec1;
    vector<int> vec2;
    int element;
    int size =6;
    
// Random number generator  
    int Random[size];
    srand(time(NULL));
    for (int i = 0; i <size; i++)
    {
        Random[i]=rand()%100 +1;
    }

////////  just for checking random number outputs ///////


    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     cout<<Random[i]<< " ";
    // }
    

    
//pushing value to vec1   
    for (int i = 0; i < size; i++)
    {
        
        vec1.push_back(Random[i]);
    }
// pushing value to vec2
    for (int i = 1; i <=size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if(vec1[i-1]>vec1[j])
            {
                vec2.push_back(vec1[j]);
            }
        }
        
    }
    

    display(vec1);
    cout<<endl;
    minimum_number(vec1);
    maximum_number(vec1);
    cout<<endl;
    display(vec2);
    
    

    
    return 0;
}