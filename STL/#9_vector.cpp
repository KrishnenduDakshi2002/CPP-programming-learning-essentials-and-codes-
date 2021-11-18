#include <iostream>
using namespace std;
#include <vector>  // including header file <vector>
#define NEWLINE cout<<endl;

// in array we cann't increase or decrease size of the array when new element comes
// but in vector we can resize it when new element comes

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<"  ";
        
    }
    cout<<endl;
    
}

int main()
{

    //ways to create a vector
    vector<int> vec1;  // zero length vector
    int element;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<"enter an element to add to this vector";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);  // LINE 1
    NEWLINE
    vec1.pop_back(); //it will remove the last input
    display(vec1);  //LINE 2
    NEWLINE
    vector<int> :: iterator iter = vec1.begin(); // it will add iterator at the beginning because of .begin()
    vec1.insert(iter,1);// iterator points to first element// and it will add 1 before first element 
    display(vec1);   //LINE 3
    vec1.insert(iter+1,10); // iterator points to second element// and it will add 10 before second element 
    display(vec1);   // LINE 4
    vec1.insert(iter+1,5, 10); 
    display(vec1);  // (iter+1, {{no of copy}} , {{ insert number}})


    return 0;
}