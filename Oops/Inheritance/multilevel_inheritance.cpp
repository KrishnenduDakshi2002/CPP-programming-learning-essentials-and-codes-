#include <iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_Number(int);
        void get_roll_Number(void);

};
void student ::set_roll_Number(int r)
{
    roll_number =r;
}
void student ::get_roll_Number()
{
    cout<<"the roll number is "<<roll_number<<endl;
}

class exam: public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks();

};
void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics =m2;
}
void exam :: get_marks()
{
    cout<< "The marks of obtained in maths are :"<<maths<<endl;
    cout<< "The marks of obtained in physics are :"<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
        void display_percentage()
        {
            get_roll_Number();
            get_marks();
            cout<<"Your percentage is in  "<< (maths + physics)/2<<"%"<<endl;
        }

};


   /*
   NOTE :: 
        1. if we are inheriting B from A and C from B :[A --> B --> C]
        2. A is the base class for B and  B is the base class for C
        3. A-->B-->C is called Inheritance path
          
          
   */
int main() 
{
    result krish;
    krish.set_roll_Number(200);
    krish.set_marks(98.0 , 94.0);
    krish.display_percentage();
    
    return 0;
}