
/*
    This directive used to define symbolic constants
    
    General syntax ::
    #define  macro_name  macro_expansion

    **    it is generally in capital letters to distiguish it from other variables
    **    A space i nescessary between the macro name and macro expansion
    

    
    
    */

#include <iostream>
#include <cmath>

#define TRUE 1
#define FALSE 0
#define AGE 20  // when we need to change AGE in our source code, we just need to change this value
#define STRING "hello world"
#define PI (acos(-1))   // it will give the value of Pi = 3.14

// macro expansion for logical operator
#define AND &&  // now in source code I can use AND instead of &&
#define OR ||  // similarly in source code I can use OR instead of ||

//macro expansion for main function
#define BEGIN int main(){
#define END }

//macro expansion for printing new line 
#define NEWLINE cout<<"\n";   //here ; is an part of macro_expansion

//VERY IMPORTANT NOTE REGRADING MACRO 
#define MAX 2
/*
    If the macro name inside a character constant, string constant or a comment then it is not 
    replaced and is left as it is
*/  









using namespace std;
int main()
{
    bool Switch = TRUE;
    cout<<Switch<<endl;  // will return 1
    cout<<PI<<endl; // will return 3.1415



// example for #define AND &&
    int a =1;
    int b =0;
    while( a ==1 AND b ==0)
    {
        cout<<"This argument is true";
        break;
    }


//example for #define BEGIN and  END

// BEGIN
// cout<<"hello";
// END


//example for NEWLINE

    NEWLINE // this macro will print a new line 
    cout<<"hello I am krishnendu Dakshi";
    NEWLINE
    cout<<"I am a  1st year student in Kalyani Government Engineering College";

//example for NOTE

    int arr[MAX];
    arr[0] = 3;
    arr[1] = 4;
    NEWLINE
    cout<<"The value at 0 position "<<arr[0];
    NEWLINE
    cout<<"The value at 1 position "<<arr[1];



    return 0;
}
