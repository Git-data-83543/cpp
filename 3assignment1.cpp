#include<iostream>
using namespace std;

class Cylinder
{
    private:
      double radius;
      double height;
      double volume;
      const static double PI;
    public:
        Cylinder()//parameterless const
        {
            radius=1;
            height=1;
        }
         Cylinder(double radius,double height)//Paramterised consr
        {
        this->radius=radius;
        this->height=height;
         }

       double getradius()//inspector
        {
            return radius;
        }

       void setRadius()//settor method//mutator
        {
            this->radius=radius;
        }
        double getheight()//inspector
        {
            return height;

        }
         double getvolume()//inspector 
        {
           return PI*radius*radius*height;

        }
        void printVolume()
        {
           cout<<"voulume of cylinder is="<<getvolume()<<endl;


        }
};
double const Cylinder::PI=3.14;//globally declare//out of class
int main()
{
    Cylinder c1(10,20);
    Cylinder c2;
    
    c1.printVolume();
    c2.printVolume();



}