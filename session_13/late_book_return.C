/**************************************************************************************************************************
 A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee 
and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to
accept the number of days the member is late to return the book and display the fine or the appropriate message. 
*/
int main( )
{
    int days;
    printf("enter number of days\n");
    scanf("%d",&days);
    float fine;
    if(days <= 0) {
        fine = 0;
    } else if(days <= 5) {
        fine = days*0.5;
    } else if( days <= 10) {
        fine = 0.5*5 + (days-5)*1;
    }else  {
        fine = 5*0.5 + 5*1 + (days-10)*5;
    }
    printf("you have to pay %f for %d days\n",fine,days);
    if(days > 30) {
        printf("your membership has been cancelled\n");
    }
}
