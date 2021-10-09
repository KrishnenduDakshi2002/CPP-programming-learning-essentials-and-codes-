#include <iostream>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnvalue;
    public:
        BankDeposit(){}; // we have to write a blank constructor 
        // when we can't give input to pricncipal, year, rate
        // it's creating blank objects first, when entered any 
        // value it then blank objects will overwrited
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal =p;
    years =y;
    interestRate=r;
    returnvalue =principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1+interestRate);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal =p;
    years =y;
    interestRate=float(r)/100;
    returnvalue =principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1+interestRate);
    }

}
void BankDeposit :: show()
{
    cout<<endl<<"Principal amount was :"<<principal<<endl
    <<"return value after "<<years<<"  is "<<returnvalue<<endl;
}
int main()
{
    BankDeposit bd1,bd2,bd3;
    int pricipal, years;
    float rate;
    int Rate;

    cout<<"enter the value of Pricipal, years, rate"<<endl;
    cin>>pricipal>>years>>rate;
    bd1= BankDeposit(pricipal,years,rate); // rate in float 0.04
    bd1.show();
    cin>>pricipal>>years>>Rate;
    bd2= BankDeposit(pricipal,years,Rate);// Rate in int 4%
    bd2.show();
    
    return 0;
}