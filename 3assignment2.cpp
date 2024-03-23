#include<iostream>
using namespace std;
class Time
{
   private:
        int h;
        int m;
        int s;
    public:
        Time()//parameter less constructor 
        {
           h=1;
           m=1;
           s=1;

        }
        Time(int h,int m,int s)//parameterized constructor
        {
            this->h=h;
            this->m=m;
            this->s=s;
            

        }
    
        int getHour()//inspector
        {
            return h;
        }
        int getMinute()//inspector
        {
            return m;
        }
        int getsecond()//inspector
        {
            return s;
        }
        void acceptTime()
        {
            cout<<"hour"<<endl;
            cin>>h;
            cout<<"MINUTE"<<endl;
            cin>>m;
            cout<<"SECOND"<<endl;
            cin>>s;

            
        }
        void printTime()
        {
            cout<<"HOUR:"<<h<<endl;
            cout<<"MINUTE:"<<m<<endl;
            cout<<"SECOND:"<<s<<endl;
        }

         void setHour()//settor is also called mutator return type is void
         {
            this->h=h;

        }
        void setMinute()
        {
            this->m=m;//call by using setter method//mutator
        }
        void setseconds()
        {
            this->s=s;//call by using settor method
        }

};


int main()
{
    int h;
    int m;
    int s;

     Time *ptr1=new Time(10,20,30);
     Time *ptr=new Time;
     Time *ptr3=new Time(h,m,s);
     
     ptr1->acceptTime();
     ptr->printTime();
     ptr1->printTime();
     ptr3->printTime();

     delete ptr1;
     delete ptr;

     ptr1=NULL;
     ptr=NULL;


return 0;


}

