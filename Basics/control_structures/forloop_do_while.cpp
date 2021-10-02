#include <iostream>

using namespace std;

int main()
{
    //for loop 
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<"for loop result :"<<i<<endl;
        
    }
    cout<<endl;
    
    //*********  do while loop *****

    // if the condition is false it will 
    //print the value of j atleast once
    int j=1;
    do{
        cout<<"do while loop result :"<<j<<endl<<endl;
        j++;
    }while(j<10); 



    //****** while loop *******

    int k=1;
    while(k<10)
    {
        cout<<"while loop results :"<<k<<endl;
        k++;
    }
    

    return 0;
}