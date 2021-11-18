/*

    template -> class -> object
    
    like:: class is a template for making objects inn runtime
    similarly template(we are studing) is template for class


    syntax ::
     
    template <class T>  // T can be int, float, double, char etc...
    class vector
    {
        T * arr;
        public:
            vector(T *arr)
            {
                ....
            }

            // and many other methods

    };

    int main()
    {
        vector<int> My_vec(ptr);
        vector<float> My_float_vec(ptr);
    }

    */