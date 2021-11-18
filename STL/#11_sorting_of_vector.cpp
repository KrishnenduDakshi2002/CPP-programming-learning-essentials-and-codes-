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


int main()
{
    vector<int> vec1;
    vector<int> vec2;
    int n = vec1.size();
    int element;
    int size =6;
    
// Random number generator  
    int Random[size];
    srand(time(NULL));
    for (int i = 0; i <size; i++)
    {
        Random[i]=rand()%100 +1;
    }


    //pushing value to vec1   
    for (int i = 0; i < size; i++)
    {
        
        vec1.push_back(Random[i]);
    }

    display(vec1);

// sorting elements
    sort(vec1.begin(), vec1.end());
    cout<<endl;
    cout<<"printing sorted vector ..."<<endl;
    display(vec1);
    return 0;
}