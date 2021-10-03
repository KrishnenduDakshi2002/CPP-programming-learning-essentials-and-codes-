#include <iostream>
using namespace std;
float return_investment ( int currunt_investment, float interest=1.04) // here 1.04 is default 
// untill we change this value with other value

// default argument has to be in most righthand corner
{
    float return_of_investment = currunt_investment* interest;
    return return_of_investment;
}
int main()
{
    int investment;
    cout<<" your investment is :";
    cin>> investment;
    cout<<"Return after 1 year is:"<< return_investment(investment)<<endl;// here interest is set to default
    cout<<"For VIP : Return after 1 year is:"<<return_investment(investment,1.1)<<endl;
    // but here interest 1.1, which will overwrite default 1.04 interest.
    
    return 0;
}