#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day=1;
    ptrDate->month=02;
    ptrDate->year=1999;


};
void acceptDateOnconsole(struct Date* ptrDate)
{
   printf("\n Enter the day");
   scanf("%d",&ptrDate->day);
   printf("Enter the month :");
   scanf("%d",&ptrDate->month);
   printf("\n Enter the month");
   scanf("%d",&ptrDate->year);

};
void printDatefromvconsole(struct Date* ptrDate)
{
printf("Date:%d-%d-%d",ptrDate->day,ptrDate->month,ptrDate->year);
};
int main ()
{
    struct Date date;
    int choice;
    initDate(&date);
    do
    {
        printf("0.Exit\n");
        printf("1.Enter the day");
        printf("2.dispaly the Date");
        printf("Enter the CHOICE:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:pritnf("Thank you for visiting\n");
            break;
            case 1:printDatefromvconsole(&date);
            break;
            case 2:acceptDateOnconsole(&date);
            break;
            case 3:printDatefromvconsole(&date);
            break; 
            default:printf("Enter the valid choice");      }
       
       } while (choice!=0);

       return 0;
       
        
    }
    

