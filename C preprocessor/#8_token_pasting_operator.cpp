/*
    it is used to concatenate two tokens into a single token
    like::
    
    a , b  ---> ab
    c , d ---> cd
*/
#include <iostream>
using namespace std;
#define PASTE(a,b)  a##b
#define MARKS(subject) marks_##subject




int main()
{
    int p2 =12 ,p3 =15;
    int marks_chemistry =90;
    int marks_physics = 94;
    cout<<"number of students passed in physics exam :"<< PASTE(p,2)<<endl;
    cout<<"number of students passed in chemistry exam :"<< PASTE(p,3)<<endl;
    cout<<"Marks of physics is :"<<MARKS(physics) <<endl;
    cout<<"Marks of chemistry is :"<<MARKS(chemistry) <<endl;
    return 0;
}