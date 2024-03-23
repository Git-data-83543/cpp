#include<iostream>
using namespace std;
class Address
{
   private://data member 
          string building;
          string street;
          string city;
          int pin;
    public://member function
    Address()//default constructor
    {
       building="Shree Niwas";
       street="miri road";
       city="pune";
       pin=411028;

    }
    void setBuilding(string building)//setter mehtod
    {
        this->building=building;
    }
    string getbuilding()//inspector//get
    {
        return building;
    }
    void setstreet(string street)//settor 
    {
     this->street=street;
    }
    string getstreet(string)//getter 
    {
       return street;

    }
    void setcity(string city)//settor method
    {
      this->city=city;
    }
    string getcity(string city)//inspector//gettor
    {
       return city;
    }
    void accept()//accept funnction 
    {
        cout<<"-------Address Details-----"<<endl;
        cout<<"BUILDING";
        cin>>building
        cout<<"street"<<endl;
        cin>>street;
        

        cout<<"city"<<endl;
        cout<<"pin"<<end;
        
        

    }
      

      



}
int main()
{
    return 0;
}