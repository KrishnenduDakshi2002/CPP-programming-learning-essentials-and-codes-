#include <iostream>
using namespace std;
template <class T>  // here T is a custom datatype and i will deifne that in the driver code

class Vector
{
    public:
    
    T * arr;
    int size;
        Vector(int m)
        {
            size = m;
            arr = new T[size];
        }
        T dotVector(Vector &v)
        {
            T d =0;
            for (int i = 0; i < size; i++)
            {
                d+= this->arr[i] * v.arr[i];

            }
            return d;
            
        }
};




int main()
{
    Vector <float> v1(3);
    v1.arr[0] =4.1;
    v1.arr[1] =3.3;
    v1.arr[2] =1.4;

    Vector <float>v2(3);
    v2.arr[0]=1.2;
    v2.arr[1]=0.4;
    v2.arr[2]=1.4;

    float a = v1.dotVector(v2);
    cout<<a<<endl; // {(4.1*1.2) + (3.3*0.4) + (1.4*1.4)} = answer
    
    return 0;
}