// Q3. Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();

#include<iostream>
using namespace std;

class Student 
{
    private://data member
       int rollno;
       string name;
       float marks;
    public:
    void initStudent()//some value by hard coded
    {
     int rollno=10;
     string name="divya";
     float marks=50.43;
    }
     
    void acceptStudentFromConsole()//member function
    {
     cout<<"STUDENT ROLL NO"<<endl;//as printf
     cin>>rollno;//as scanf
     cout<<"NAME"<<endl;
     cin>>name;
     cout<<"MARKS"<<endl;
     //printf("MARKS=%d",marks);
     cin>>marks;
    }

    void printStudentOnConsole()
    {//member function
       cout<<"roll no: "<<rollno<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
    }


};
int main()
{
    Student s;
    int choice;
    do
    {
        cout<<"0.Exit"<<endl;
         cout<<"Enter 1 to accept the student details"<<endl;
        cout<<"Enter 2 to print student detatils"<<endl;
        cout<<"Enter 3 for init function"<<endl;
        cout<<"Enter choice"<<endl;
        cin>>choice;//taking from user

        switch(choice)
        {   
            case 0:
               
               cout<<"thanks for visiting"<<endl;
               break;
            case 1:
               s.acceptStudentFromConsole();
               break;
            case 2:
             s.printStudentOnConsole();
              
                break;
            case 3:
            s.initStudent();
            default:
            cout<<"enter the valid choice......."<<endl;
            break;
        }

    } while (choice!=0);
    return 0;
    
}