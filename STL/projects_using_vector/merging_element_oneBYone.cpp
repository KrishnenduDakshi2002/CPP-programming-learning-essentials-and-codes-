#include <iostream>
#include <list>
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


void Merging_twoLists(list<int> &lst1, list<int> &lst2)
{
    list<int> :: iterator itr,itr1;
    itr = lst1.begin(); // itr points to beginning of list1
    itr1 = lst2.begin(); // itr1 points to beginning of list2
    
    for(itr=lst1.begin(); itr!= lst1.end();++itr)
    {
        lst1.insert(itr,*itr1);
        itr1++;
    } 

}



int main()
{
    list<int> list1,list2;
    list<int> :: iterator itr;
    int element;
    int size =4;
   
    
    setValue(list1,4);
    display(list1);
    setValue(list2,4);
    display(list2);
// for better understanding of this code use list1 values(2,4,6,8)
// for better understanding of this code use list2 values(1,3,5,7)
    Merging_twoLists(list1,list2);
    display(list1);


    
    return 0;
}