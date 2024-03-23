#include<iostream>
using namespace std;
class Box//class box
{
   
   
   private://data member
        int length;
        int width;
        int height;
        float v;
   public:
       Box()//parameterless constructor
       {
        length=5;
        width=6;
        height=7;

        }
       Box(int length,int width,int height)//parameter constructor
       {
        this->length=length;//to access private date member use this pointer ans arrow operator
        this->width=width;
        this->height=height;

       } 
       Box(int value)
       {
        length=value;
        width=value;
        height=value;

       }
       void volume()
       {
        v=length*width*height;
        cout<<"Volume Of A Box="<<v<<endl;
       }


};




int main ()
{
Box b1;
b1.volume();
Box b2(5,6,7);
b2.volume();
Box b3(5);
b3.volume();

}