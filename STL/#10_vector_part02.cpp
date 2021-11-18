#include <iostream>
using namespace std;
#include <vector>  // including header file <vector>
#define NEWLINE cout<<endl;

template<class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector"<<endl;
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
    vector<char> vec2(4);  // 4 element character length vector
    vector<char> vec3(vec2);  // 4 element character vector from vec2
    vector<int> vec4(6,3); // 6 element vector of 3s
    
    vec2.push_back('5');
    display(vec2);
    display(vec4);
    return 0;
}