#include<iostream>
using namespace std;
class Date
{
    private:
       int day;
       int month;
       int year;
    public:
          /*Date()
          {
            int date=10;
            int month=05;
            int year=1999;

          } */  
          void displayDate()
          {
            cout<<"Date"<<endl;
            cout<<"/Month"<<endl;
            cout<<"/Year"<<endl;

          }
          void acceptDate()
          {
            cout<<"Day:"<<endl;
            cin>>day;
            cout<<"Month:"<<endl;
            cin>>month;
            cout<<"year:"<<endl;
            cin>>year;

          }

};
class Person 
     {
        private:
           string name;
           string address;
           Date dob;//Association
        public:
            /*Person()
              {
                   string name="aishu";
                   string address="";
              }*/
              void acceptData()
              {
                cout<<"name"<<endl;
                cin>>name;
                cout<<"address"<<endl;
                cin>>address;
                dob.acceptDate();
            };
              void displayData()
              {
               cout<<"NAME:"<<endl;
               cout<<"ADDRESS"<<endl;
               cout<<"Date Of Birthday:"<<endl;
               dob.displayDate();

              };
    };
 class Employee:public Person//inheritance
 {
    private:
        int empid;
        int sal;
        string dept;
        Date doj;//Association
    public:
       void acceptDate()//to accept join date
       {
           doj.acceptDate();
           Person::acceptData();
       };
       void acceptData()//personal details
       {
        cout<<"ID"<<endl;
        cin>>empid;
        cout<<"SALARY"<<endl;
        cin>>sal;
        cout<<"department"<<endl;
        cin>>dept;
    
       };
       void displayData()//to dispaly join date
       {
          doj.displayDate();
       };
       void displaydata()//personal details
       {
        cout<<"ID"<<endl;
        cout<<"SALARY"<<endl;
        cout<<"department"<<endl;
       };
        


 } ;   
 int main()
 {
     Date d;//object
     Person p;//object 
     Employee e;//object 
     int choice=0;
    do
    {
        cout<<"0.EXIT"<<endl;
        cout<<"1.ACCEPT DATA  FROM PERSON;"<<endl;

       cout<<"2.DISPLAY DATA  FROM PERSON;"<<endl;
       cout<<"3.ACCEPT DATA  FROM Employees;"<<endl;
       cout<<"4 DISPLAY DATA  FROM Employees;"<<endl;
       cout<<"Enter your choice-";
       cin>>choice;
       switch(choice)
       {
        case 0:
            cout<<"....THANK YOU ...";
            break;
        case 1:
             p.acceptData();
             break;
        case 2:
            p.displayData();
            break;
        case 3:
            e.acceptData();
            break;
        case 4:
             e.displayData();
        default:
             cout<<"WRONG CHOICE"<<endl;
            break;


       }
        
    } while (choice!=0);
    return 0;
    
     
 }
