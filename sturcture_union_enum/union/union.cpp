#include <iostream>
#include<string>

using namespace std;

union chooseNumber    
{
    int fav_num;  
    int lucky_num;
    int unlucky_num;
    
};
/*
    union is used when we just want a single variable from 
    multiples, to save the memory 
*/
/*
    when I have to choose a number, then  i have three
    options fav_num,lucky_num, unlucky_num,

    I can't choose three at a time.

    in those cases we use union instead of struct to 
    save memmory utilisation in our system.
*/

int main()
{
    union chooseNumber num;
    num.fav_num=12;  // i can  use only one number at a time
    cout<<num.fav_num;// others will be overwrited
    //num.lucky_num=10;
    //cout<<num.lucky_num;
    return 0;
}