#include <iostream>
using namespace std;
class grocery
{
    int itemID[10];
    float itemPrice[10];
    int counterID;
    public:
        void ID(){counterID=0;}
        void itemDetails()
        {
            cout<< "enter your product ID : "<<endl;
            cin>>itemID[counterID];
            
            cout<< "enter your product price : "<<endl;
            cin>>itemPrice[counterID];
            counterID++;
        }
        void displayDetails();

};
void grocery ::displayDetails(void)
{
    for (int i = 0; i < counterID; i++)
    {
        /* code */
        cout<<" Product ID :"<<itemID[i]<<"product price :"<<itemPrice[i]<<endl;

    }
    
}
int main()
{

    // driver program
    grocery shop;
    shop.ID();
    shop.itemDetails();  // counterID =0;
    shop.itemDetails();  // counterID =1;
    shop.itemDetails();  // counterID =2;
    // we can call itemDetails()  method maximum 10 times
    shop.displayDetails();


    
    return 0;
}