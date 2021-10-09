#include <iostream>
#include<math.h>// for pow() function
using namespace std;

class point
{
    int x,y;
    public:
        point(int a , int b)// constructor
        {
            x=a;
            y=b;

        }
        void displayPoint()
        {
            int innerPart = (x*x) + (y*y);
            float distance = pow(innerPart,0.5);
            cout<<"the point is :"<<x<< ","<<y<<endl;
            cout<<"Distance between these two points is :"<<distance<<endl;
        }

};
int main()
{
    point p(1,1);
    p.displayPoint();
    point q(4,3);
    q.displayPoint();
    
    return 0;
}