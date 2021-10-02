#include <iostream>

using namespace std;
void sum_subs_mul_divi(int a, int b, int *psum, int *psubs,int *pmul, int *pdivi)
{
    *psum= a+b;
    *psubs= a-b;
    *pmul= a*b;
    *pdivi= a/b;
    
}
int main()
{
    int x,y,psum,psubs,pmul,pdivi;
    x=8;
    y=2;
    sum_subs_mul_divi(x,y,&psum,&psubs,&pmul,&pdivi);
    cout<<"sum is :"<< psum<<endl;
    cout<<"substraction is :"<< psubs<<endl;
    cout<<"Multiplication  is :"<< pmul<<endl;
    cout<<"division is :"<< pdivi<<endl;
    
    cout<<" end of program!!!";
    
    return 0;
}