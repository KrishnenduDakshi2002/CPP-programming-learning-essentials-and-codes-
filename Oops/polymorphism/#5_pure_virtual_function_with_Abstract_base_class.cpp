
#include <iostream>
#include <cstring>
using namespace std;
// Abstract base class is that class which is design to inherit
// and has aleast one pure virtual function
// we don't make objects of this class 
class code_with_harry   // used as an abstract class
{
    protected:
        string title;
        float rating;
    public:
        code_with_harry(string s, float r)
        {
            title = s;
            rating = r;
        }
        
        virtual void display()=0; // do nothing function 
        // this above funtion is known as  pure virtual funciton
       


};

class code_with_harry_video : public code_with_harry
{
    int video_length;
    public:
        code_with_harry_video(string s, float r, float video_length) : code_with_harry(s,r)
        {
            this->video_length = video_length;
        }
        void display()
        {
            cout<<"This is an amazing video with title :"<<title<<endl;
            cout<<"Rating :"<<rating<<"rating out of 5 star "<<endl;
            cout<<"Length of this video is  :"<<video_length<<"  minutes"<<endl;
        }
};

class code_wtih_harry_text : public code_with_harry
{
    int words;
    public:
        code_wtih_harry_text(string s, float r, int wc): code_with_harry(s,r)
        {
            words =wc;
        }
        void display()
        {
            cout<<"This is an amazing text tutorial with title :"<<title<<endl;
            cout<<"Rating of this text tutorial :"<<rating<<"rating out of 5 star "<<endl;
            cout<<"No of topics in this text tutorial is  :"<<words<<endl;
        }
    
};


int main()
{
    string title;
    float rating , video_length;
    int words;


    // for code with harry video
    title = "django tutorial";
    video_length = 4.34;
    rating = 4.34;
    code_with_harry_video djvideo(title , rating, video_length);
    djvideo.display();

    // for code with harry text
    title = "django tutorial text";
    words= 4333;
    rating = 4.34;
    code_wtih_harry_text djtext(title , rating, video_length);
    djtext.display();

    // invoking with pointers
    code_with_harry * tuts[2];  //creating array of pointers 
    tuts[0] = &djvideo; // first pointer will point to djvideo object
    tuts[1] = &djtext; // second pointer will point to djtext object

    tuts[0]->display();
    tuts[1]->display();

    

    
    return 0;
}

