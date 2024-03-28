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
        cout<<"inside Employee)()"<<endl;
    }
    Employee(int id,double salary)
    {
        cout<<"inside Employee(int double)"<<endl;
    }
   virtual void accept()
        {
            cout<<"enter the empid-";
            cin>>id;
            cout<<"enter the salary-";
            cin>>salary;

        } 
        virtual void display()
        {
            cout<<"ID"<<id<<endl;
            cout<<"salary"<<salary<<endl;
        }
        virtual ~Employee()
        {
            cout<<"~Employee()"<<endl;
        }
};
class Manager:virtual public Employee
{
  private:
  double bonus;
  protected:
     void acceptManager()
    {
        cout<<"enter the bonus"<<endl;
         cin>>bonus;

    }
    void displayManager()
  {
    cout<<"Bonus-"<<bonus<<endl;

  }
  public:
  Manager()
  {
    cout<<"inside Manager()"<<endl;
  }
  Manager(int id,double salary,double bonus)
  {
    cout<<"inside manager(int double double )"<<endl;

  }
  void accept()

  {
    Employee::accept();
    acceptManager();

  }
  void display()
  {
    Employee::display();
    displayManager();
    cout<<"******************************************"<<endl;
  }
    ~Manager()
    {
        cout<<"~Manager()"<<endl;
    }

};
class Salesman:virtual public Employee
{
    private:
      double commission;
    protected:
    void acceptSalesman()
    {
        cout<<"Enter the commission -";
        cin>>commission;

    }  
    void displaySalesman()
    {
        cout<<"CONNISSION"<<commission<<endl;
    }
    public:
    void accept()
    {
      Employee::accept();
      acceptSalesman();
    }
    void display()
    {
      Employee::display();
      acceptSalesman();
    }
};
class SalesManager :  public Manager,public Salesman
{
public:
   SalesManager()
   {
    cout<<"inside Salesmanager()"<<endl;

   }
   SalesManager(int id,double salary,double bonus,double commission)
   {
    cout<<"Inside(int double,double,double)"<<endl;
   }
   ~SalesManager()
   {
    cout<<"~salesmanager()"<<endl;
   }
   void accept()
   {
    Employee::accept();
    acceptManager();
    acceptSalesman();
   }
   void display()
   {
    Employee:display();
    displayManager();
    displaySalesman();
    cout<<"***********************************************"<<endl;

   }
};

int main()
{
  Employee *eptr[10];
  int choice;
  int choice1;
  int index=0;

  Employee *arr[5];
  do
  {
    cout<<"0.EXIT"<<endl;
    cout<<"1.Accept Employee"<<endl;
    cout<<"2.count of all employees with respect to designation "<<endl;
    cout<<"3.Display All Manager"<<endl;
    cout<<"4.Disaply All Salesman"<<endl;
    cout<<"5.Display all salesmanager"<<endl;
    cout<<"Enter your Choice-";
    cin>>choice;
    switch(choice)
    {
      case 0:
       cout<<"****THANK YOU FOR USING OUR APP*******";
       break;
       case 1:
          {
            int ch;
            do
            {
              cout<<"0.EXIT"<<endl;
              cout<<"1.acceptManager"<<endl;
              cout<<"2.AcceptSalesman:"<<endl;
              cout<<"3.accept salesmanger:"<<endl;
              cout<<"Enter your choice:";
              cin>>choice1;
              switch(ch)
              {
                case 0:
                cout<<"EXIT"<<endl;
                break;
                case 1:
                {
                 eptr[index]=new Manager();
                 eptr[index]->accept();
                 index++;
                 break;

                }
                case2:
                    eptr[index]=new Salesman();
                    eptr[index]->accept();
                    index++;
                break;
                case 3:
                     eptr[index]=new SalesManager();
                     eptr[index]->accept();
                     index++;
                break;
                default:
                cout<<"wrong choice......"<<endl;
                break;


              }

            }while(ch!=0);
          }
          break;
          case 2:
          {
            int man=0;
            int salm=0;
            int salmang=0;
            for(int i=0;i<index;i++)
            if(typeid(*eptr[i])==typeid(Manager))
            man++;
            cout<<"count of managers:"<<man<<endl;
            for(int i=0;i<index;i++)
            if(typeid(*eptr[i])==typeid(Salesman))
            salm++;
            cout<<"count of salesman:"<<salm<<endl;
            for(int i=0;i<index;i++)
            if(typeid(*eptr[i])==typeid(salmang))
            salmang++;
            cout<<"count of salesmanager:"<<salmang<<endl;
            }
            break;
            case 3:
                  cout<<"Display All Managers"<<endl;
                  for(int i=0;i<index;i++)
                  if(typeid(*eptr[i])==typeid(Manager))
                  eptr[i]->display();
                  break;
            case 4:
              cout<<"Display All Salesman:"<<endl;
              for(int i=0;i<index;i++)
               if(typeid(*eptr[i])==typeid(Salesman))
               eptr[i]->display();
               break;
            case 5:
                 cout<<"Display All SalesManager:"<<endl;
                for(int i=0;i<index;i++)
                if(typeid(*eptr[i])==typeid(SalesManager))
                eptr[i]->display();
                break;
            default:
            cout<<"Wrong choice-----"<<endl;
            break;
}

  }while(choice!=0);
  return 0;
}
