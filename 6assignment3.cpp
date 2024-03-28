//Q3. Implement following classes. Test all functionalities in main() of each created class. Note that
//employee is inherited into manager and salesman.
#include<iostream>
using namespace std;
 class Employee
 {
    private:
         int id;
         double salary;
    public:
      Employee()
      {

      }    
      Employee(int id,double salary)
      {

      }
      void setId(int id)
      {
        this->id=id;
      }
      int  getId()
      {
        return id;

      }
      void setsalary(double salary)
      {
        this->salary=salary;

      }
      double getsalary()
      {
        return salary;
      }
     virtual void  accept()
     {
        cout<<"enter id:"<<endl;
        cin>>id;
        cout<<"enter salary:"<<endl;
        cin>>salary;

     }
     virtual void  display()
     {
        cout<<"ID:"<<endl;
        cout<<"salary:"<<endl;

     }
     virtual ~Employee()
     {
        cout<<"~Employee()"<<endl;

     }
        
 };
 class Manager : virtual public Employee
 {
    private:
        double bonus;
    public:
    Manager()
    {
     cout<<"Inside Manager()"<<endl;
    }
    Manager(int id,double salary,double bonus)
    {
    cout<<"Inside Manager(int,double,double)";
    }
    void setBonus(double bonus)
    {
        this->bonus=bonus;

    }
    double getbonus()
    {
        return bonus;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        void setbonus();
    }
    void display()
    {
        Employee::display();
        displayManager();
        void getBonus();
    }
    ~Manager()
    {
        cout<<"~Manager()"<<endl;
    }
protected:
void acceptManager()
{
    cout<<"Enter thr bonus --";
    cin>>bonus;
}    
void displayManager()
{
    cout<<"bonus"<<bonus<<endl;
}

    

 };
class Salesman:virtual public Employee
 {
 
    private:
         double commission;
    protected:
          void acceptSalesman()
    {
          cout<<"Enter commission"<<endl;
          cin>>commission;
    }
    void displaySalesman()
    {
        cout<<"Commission"<<endl;


    }
 public:
 Salesman()
 {
  cout<<"inside salesman()";
 }
 Salesman(int id,double salary,double commission)
 {
    cout<<"Inside salesman(int ,double,double)"<<endl;
 }
 void setcommission(double commission)
 {
    this->commission=commission;
 }
 double getcommission()
 {
    return commission;
 }
 void accept()
 {
    Employee::accept();
    acceptSalesman();
 }
 void display()
 {
    Employee::display();
    displaySalesman();

 }
 };
 class SalesManager : public Manager,public Salesman
 {
public:
SalesManager()
{
    cout<<"InSIDE SALESMANAGER()"<<endl;

}
SalesManager(int id,double salary,double bonus ,double commission)
{
    cout<<"Imside salesmanager parameterised class "<<endl;

}
~SalesManager()
{
    cout<<"~salesmanager ()"<<endl;

}
void accept()
{
    Employee::accept();
    acceptManager();
    acceptSalesman();
}
void display()
{
    Employee::display();
    displayManager();
    displaySalesman();
}
 };
 int main()
 {
    /*Employee *eptr =new Employee;
    eptr->accept();
    eptr->display();

    Employee *eptr =new Manager;
    eptr->accept();
    eptr->display();*/
    Employee *eptr =new Salesman;
    eptr->accept();
    eptr->display();
    Employee *eptr =new SalesManager;
    eptr->accept();
    eptr->display();
    delete eptr;
    eptr=NULL;
    delete eptr;
    eptr=NULL;
    
    delete eptr;
    eptr=NULL;
    delete eptr;
    eptr=NULL;
    
    

 }