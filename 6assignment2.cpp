/*Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]*/
#include <iostream>
using namespace std;
class Product // base class
{
private:
  int id;
  string title;
  double price;

public:
  virtual void accept() // partial complete function
  {
    cout << "ID" << endl;
    cin >> id;
    cout << "Title" << endl;
    cin >> title;
    cout << "Price" << endl;
    cin >> price;
  }
  virtual void display()
  {
    cout << "ID" << endl;
    cout << "TITLE" << endl;
    cout << "price" << endl;
  }
  double getprice() // gettor //inspector
  {
    return price;
  }
  void setprice() // seettor// mutator
  {
    this->price = price;
  }
};
class Book : public Product
{
private:
  // int id;//not require again mention
  // string title;//not require again to mention
  // double  price; //not require again to mention
  string author;

public:
  void accept()
  {
    double p;
    cout << "Author Name" << endl;
    cin >> author;
    Product::accept();
    p = getprice();
    p = (p - 0.1 * p);
    setprice();
  }
  void display()
  {
    cout << "AUTHOR NAME:" << endl;
    cin >> author;
    Product::display();
  }
};
class Tape : public Product
{
   private:
          string artist;
    public:
        void accept()
    {
      Product::accept();
      cout<<"ARTIST NAME:"<<endl;
      cin>>artist;
    }
       void display()
      {
        
        Product::display();
        cout<<"ARTIST"<<endl;
        

      }
  

};
int main()
{
  Product *arr[3];
  int choice;
  int index=0;
  do
  {
    cout<<endl;
    cout<<endl;
    cout<<"0.EXIT";
    cout<<"1:TO BUY BOOK";
    cout<<"2.TO BUY TAPE";
    cout<<"to calculate total";
    cout<<"to see all list details"<<endl;
    cout<<"ENTER CHOICE";
    cin>>choice;
    switch(choice)
    {
      case 0:
          cout<<"thank for using"<<endl;
         break;
      case 1:
          if(index<3)
          {
            arr[index]=new Book();//upcasting
            arr[index]->accept();
            index++;
          }  
          else
          {
          cout<<"list is full"; 
          }
          break;
      case 2:
         if    (index<3)
         {
          arr[index]=new Tape();
          arr[index]->accept();
          index++;
          }
          else
          {
            cout<<"list is full";
          }
          break;
        case 3:
        {
          double total=0;
          for(int i=0;i<index;i++)
          {
            total=total+arr[i]->getprice();
          }
          cout<<"total is:"<<total;
        }
        break;
        case 4:
        for(int i=0;i<index;i++)
        {
          arr[i]->display();
          cout<<endl;
          cout<<endl;

        }
        break;
        default:
        cout<<"enter right choice"<<endl;
        break;


         

    }

    
  } while (choice!=0);
  for(int i=0;i<index;i++)
  {
    delete arr[i];
    arr[i]=NULL;
  }
  //
  
  
  

  
  
}
