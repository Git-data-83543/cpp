#include<iostream>
using namespace std;
class Date
{
    private://data member
        int day;
        int month;
        int year;
    public:
         void initDate()//member function 
         {
            day=12;

            month=06;
            year=1999 ;
         }        
         void printDateOnConsole()//member function
         {
            cout<<"day-month-year"<<endl;
            cout<<day<<"/"<<month<<"/"<<year<<endl;
         

         }
         void acceptDatefromconsole()//member function
         {
            cout<<"enter day"<<endl;
            cin>>day;
            cout<<"enter month"<<endl;
            cin>>month;
            cout<<"enter year"<<endl;
            cin>>year;        
         
         
         } 
         bool isLeapYear()//member function
         {
            if(year%4==0 && year !=100 ||year%400==0)
            {
               return true;
            }
            else{
               return false;
            }
         }

};
int main()
{
   int choice;
   Date d;//create object 
   
   do
   {
      cout<<"0.Exit"<<endl;
      cout<<"1.set initial date"<<endl;
      cout<<"2.print on console"<<endl;
      cout<<"3.accept date "<<endl;
      cout<<"4.check whether leap year or not "<<endl;
      cout<<"ENTER YOUR CHOICE"<<endl;
      cin>>choice;//cin takkig from user 

     switch(choice) 
     {
      case 0:
         cout<<".....thanks for visiting us."<<endl;
         break;
      case 1:
         d.initDate();
         break;

      case 2:
         d.printDateOnConsole();//object.memberfunction

         break;
      case 3:
         d.acceptDatefromconsole();//object.memberfunction
         break;
      case 4:
         d.isLeapYear();
         break;
      default:
         cout<<"....default case";
         break;

         

   }
   }while(choice!=0);

  
}
