
/* 
    sometimes the replacement of integer constants by some
    meaningful and descriotive names, enhances the readabilty
    of the code and makes it self documenting
*/
/* 
    for example, suppose if we could use names like jan, Feb,
    mar, apr instead of the the numbers 1,2,3,4
 */


#include <iostream>


using namespace std;



int main()
{
    //enum month {jan,feb,mar,apr}; //-->jan(0),feb(1),mar(2),apr(3)
    enum month{jan=1,feb,mar,apr}; //--->now jan(1),feb(2),mar(3),apr(4)
        // here (jan, feb, mar, apr) are called enumerators
        // defualt values starts form 0,1,2.....
        // but we can assign any value to the enumerators
        //it is possible to assign same value to more than one
        //   enumerators
    month m1= jan;  // here month is user defined datatype
    month m2= feb;  //m1,m2,m3,m4 are enumerator variables
    month m3= mar;
    month m4= apr;
    
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    cout<<m4<<endl;
    



    /// ********** another syntax *************///
   
   
    enum Month{Jan=1,Feb,Mar,Apr}M1,M2,M3,M4;
    /* 
       we can do all operation with these enumerator variables 
       like other variables
    */ 

    /*
       for system still Jan means 1,Feb means 2, so on
       to increase the readabilty and meaningfulness of our 
       code we assign  1 as Jan, becuase it is so easy to
       understand not that complecated, just write 1,2,...
    */
    /*
       we can give any integer a meaningful name
       like: 1(jan),2(feb)
       
    */


    M1 = Jan;  
    M2 = Feb;
    M3 = Mar;
    M4 = Apr;
    
    cout<<M1<<endl;
    cout<<M2<<endl;
    cout<<M3<<endl;
    cout<<M4<<endl;

    return 0;
}