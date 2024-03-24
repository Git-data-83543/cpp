#include<iostream>
using namespace std;
class Stack
{
    private :
        int size;
        int * arr;
        int top;
    public:
         Stack(int size =5) 
         {
            this->size=size;
            top=-1;
            arr=new int[size];
         }  
         bool isEmpty()
         {
            if(top==-1)
              return true;
            else
              return false;  
         } 
         bool isfull()
         {
            if (top==size -1)
               return true;
            else
            return false;


         }
         void accept()
         {
        
         }
         void push(int value)
         {
            if (isfull())
            {
                cout <<"stack is overflow!"<<endl;
            }
            else
            {
                top++;
                arr[top]=value;
            }
         }
         void pop()
         {
            if(!isEmpty())
            {
                arr[top]=-1;
                top--;
            }
            else{
                cout << "stack is underflow"<<endl;
            }
         }
         int peek()
         {
            int value;
            value=arr[top];
            return value;
         }
         void print()
         {
            for(int i=size -1;i>=0;i--)
            {
                cout<<"STACK:"<<arr[i]<<endl;
            }
         }
         ~Stack()
         {
            delete[] arr;
            arr=NULL;
         }
};


int main()
{ 
 int index=0;
 int i = 0,date;
 Stack a(5);

 int choice;

 do
 {
    cout<<"ENTER 0 FOR EXIT"<<endl;
    cout<<"ENTER 1 FOR push"<<endl;
    cout<<"ENTER 2 FOR pop"<<endl;
    cout<<"ENTER 3 FOR peek"<<endl;
    cout<<"ENTER 4 FOR display"<<endl;
    cout<<"ENTER CHOICE:"<<endl;
    cin>>choice;
    switch (choice)
    {
        case 0:
          cout<<"done for operation"<<endl;
          break;
        case 1:
           {
            int value;
            cout<<"ENTER VALUE TO PUSH :";
            cin >>value;
            a.push(value);

           }
           break;
        case 2:
    
            a.pop();
            break;
        case 3:
          cout<<a.peek()<<endl;
          break;
         case 4:
           a.print();
           break;
          default:
              cout <<"wrong choice!"<<endl;
              break;

         

    }
 } while (choice !=0);
    
 }