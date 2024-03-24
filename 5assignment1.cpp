#include<iostream>
using namespace std;
class Date
{
    private:
         int day;
         int month;
         int year;
    public:
        Date()
        {
            day=1;
            month=05;
            year=1999;

        }     
        void acceptDate()
        {
            cout<<"ENTER DAY:"<<endl;
            cin>>day;
            cout<<"ENTER MONTH:"<<endl;
            cin>>month;
            cout<<"ENTER YEAR"<<endl;
            cin>>year;
        }
        void displayDate()
        {
            cout<<"DATE:"<<day<<"/"<<month<<"/"<<year<<endl;

        }
};
class Person
{
    private:
        string name;
        string address;
        Date *dob;
    public:
      Person()
      {
        name="aishu";
        address="niwas";

      }
      void birthdate()
      {
        dob=new Date();
        dob->acceptDate();

      }
      void acceptperson()
      {
        cout<<"ENTER NAME:"<<name<<endl;
        cin>>name;
        cout<<"ENTER ADDRESS"<<address<<endl;
        cin>>address;
        cout<<"ENTER BIRTHDATE"<<dob<<endl;
         dob->acceptDate();
         
      }
      void displayperson()
        {
            cout<<"NAME"<<name<<endl;
            cout<<"ADDRESS"<<address<<endl;
            dob->displayDate();
        }
      



        

};
class Employee
{
    private:
       int id;
       int sal;
       string dept;
       Date *doj;  
    public:
       Employee()
       {
        id=1;
        sal=1000;
        dept="string";
       }
       void joiningDate()
       {
        doj=new Date();
        doj->acceptDate();
       }
       void acceptinfo()
       {
        cout<<"ENTER ID"<<endl;
        cin>>id;
        cout<<"SALARY"<<endl;
        cin>>sal;
        cout<<"DEPARTMENT"<<endl;
        cin>>dept;
        cout<<"DATE OF JOINING"<<endl;
        joiningDate();
       }
       void displayinfo()
       {
        cout<<"Id of employee:"<< id <<endl;
        cout<<"SALARY OF EMPLOYEE:"<<sal<<endl;
        cout<<"Department name:"<<dept<<endl;
        doj->displayDate();

       }



};
int main()
{
    Employee e;//object create 
    Person p;// object create 
    int choice;
    do
    {
        cout <<"enter 0 for exit:"<<endl;
        cout <<"enter 1 to display Employee information"<<endl;
        cout<<"enter 2 for display  person  information"<<endl;
        cout<<"ENTER CHOOICE:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 0:
                cout<<"Done!"<<endl;
                break;
            case 1:
                  e.acceptinfo();
                  e.displayinfo();
                  break;
            case 2:
                   p.acceptperson();
                   p.displayperson();
                   break;
            default:
                   cout<<"Wrong choice!"<<endl;
                   break;


        }


    } while (choice !=0);
        
    }

