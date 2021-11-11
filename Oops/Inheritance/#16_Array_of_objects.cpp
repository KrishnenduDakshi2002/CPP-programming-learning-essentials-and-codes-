#include <iostream>
using namespace std;
class shop_item
{
    int id;
    float price;
    public:
        void setData(int a, float b)
        {
            id =a;
            price =b;
        }
        void getData()
        {
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }


};
int main()
{
    shop_item *ptr = new shop_item[2]; 
    // it will create 2 objects of shop_item class
    // and ptr will point to the first object of shop_item class 
    shop_item *ptrTemp = ptr;   // ptrTemp points to ptr
    int p;
    float q;
    for (int i = 0; i < 2; i++)
    {

        cout<<"Id and Price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;  // here at the last iteration ptr will point to last object
        // if we use ptr for the next loop it will point to some random memory
        // that's why ptrTemp is used in the next for loop
    }
    for (int i = 0; i < 2; i++)
    {
        /* code */
        cout<<"item number :"<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;

    }
    
    
    
    return 0;
}