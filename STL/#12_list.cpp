#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator itr;
    for (itr =lst.begin(); itr!=lst.end(); itr++)
    {
        cout<< *itr<< " ";
    }
    cout<<endl;

}


int main()
{
    list<int> list1; // list of zero length

    //pushing to list1 
    list1.push_back(7);
    list1.push_back(13);
    list1.push_back(8);
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(9);
    list1.push_back(11);
    list1.push_back(14);

    display(list1);

    list<int> list2(3); // empty list of size 3

    // assigning value to list2
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 50;
    iter++;
    *iter = 55;

    display(list2);

    // removing elements from list1
    list1.pop_back(); // this will remove element from the back
    list1.pop_front(); // this will remove element from the front
    list1.remove(9); // this will remove every 9 from the list

    cout<<"After removing from the list .."<<endl;
    display(list1);

    //sorting list
    list1.sort();
    cout<<"After sorting the list .."<<endl;
    display(list1);

    // merging lists
    list1.merge(list2);
    cout<<"After merging the list .."<<endl;
    display(list1);

    //reversing the list
    list1.reverse();
    cout<<"After reversing the list .."<<endl;
    display(list1);
    


   

    
    return 0;
}