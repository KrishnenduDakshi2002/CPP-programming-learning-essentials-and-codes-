
// we use virtual base class, when a large code is contributated by many coders

#include <iostream>
using namespace std;
/*
Inheriance :
    student---> test
    student---> sports
    test----> result
    sports---->result
*/

class student{
    protected:
        int roll_number;  
    public:
        void set_roll_number(int a)
        {
            roll_number = a;
        }
        void print_number()
        {
            cout<<"Your roll number is "<<roll_number<<endl;
        }
    

};

class test:virtual public student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2)
        {
            maths= m1;
            physics =m2;
        }
        void print_marks(){
            cout<<"you result is here  "<<endl
                << "Maths :"<<maths<<endl
                <<"physics :"<<physics<<endl;
        }
};


class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc)
        { score =sc;
        }
        void print_score(){
            cout<<"your PT score is "<<score<<endl;
        }
};
// because of virtual base class now roll number is only one, not two
class result : public test, public sports{
    private:
        float total;
    public:
        void  display(){
            total = maths + physics + score;
            print_marks();
            print_number();
            print_score();
            cout<< "your total score is  :"<<total<<endl;
        }
};
int main()
{
    result krish;
    krish.set_roll_number(21); // we want to set roll number for one time, not for both test as well
    // as sprots, if we don't make virtual base class, all data members and methods of both test and 
    // sprots will be inherited to results class, and there will be two set_roll_number() method, one
    // for test and another for sports, and when we want to set the roll number for one student in the
    // driver code , there will be an ambiguity, compiler cann't recognize which set_roll_number() to 
    // call, the test class one or the sports class one.
    // to resolve this kind a ambiguity we use virtual base class.😄
    krish.set_marks(95,90);
    krish.set_score(9);
    krish.display();
    
    return 0;
}