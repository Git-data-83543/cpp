#include<iostream>
using namespace std;
class Toolbooth
{
    private:
       unsigned int tnc1;
       unsigned int tnc2;
       double tam;
    public:
       Toolbooth()
       {
        tnc1=0;
        tnc2=0;
        tam=0;
       }  
       void payingCar()//member function 
       {
        tnc1=++tnc1;
        tam=tam+0.50;
       }
       void nopaycar()//member function 
       {
        tnc2=++tnc2;

       }
       void printonconsole()
       {
        cout<<"----------Details------"<<endl;
        cout<<"TOTAL NO OF CARS:"<<tnc1+tnc2<<endl;
        cout<<"TOTAL NO OF PAYNG CARS:"<<tnc1<<endl;
        cout<<"TOTAL NO OF NON PAYING CARS:"<<tnc2<<endl;
        cout<<"TOTAL AMOUNT:"<<tam<<endl;
       }




};



int main()
{
int choice;
Toolbooth t;//object created
do
{
    cout<<"0.EXIT"<<endl;
    cout<<"1.PAYING CARS"<<endl;
    cout<<"2.NON PAYING CARS "<<endl;
    cout<<"3.DISPLAY DETAILS"<<endl;
    cout<<"ENTER YOUR CHOICE :"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 0:
              cout<<".....THANK YOU FOR VISITING US....";
              break;    
        case 1:
            t.payingCar();
            break;
        case 2:
             t.nopaycar();
             break;
        case 3:
             t.printonconsole();
             break; 
        default :
        cout<<"Wrong choice";        


    
    }


} while (choice=!0);
return 0;
}