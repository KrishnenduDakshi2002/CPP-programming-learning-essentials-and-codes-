#include <iostream>
#include <map>
#include <cstring>
#define NewLine cout<<endl;
using namespace std;
// Map is an associative array

void display_map(map<string,int> &map1)
{
    map<string,int> :: iterator itr;
    itr = map1.begin();
    for(itr = map1.begin(); itr!=map1.end(); itr++)
    {
        cout<<(*itr).first<< " "<<(*itr).second<<endl;
    }

}

int main()
{
    map<string, int> marksMap;
    marksMap["krish"] = 98;
    marksMap["harry"] = 95;
    marksMap["Rohan"] = 66;
// before insert
    display_map(marksMap);
    cout<<endl;
// after insert
    map<string,int> :: iterator itr;
    itr = marksMap.begin();
    marksMap.insert(pair<string,int> ("sam" ,90));  // inserting elements

    display_map(marksMap);
    NewLine

    cout<<" size of map is ::"<<marksMap.size();
    NewLine
    cout<<" max size of map can be ::"<<marksMap.max_size();



    return 0;
}