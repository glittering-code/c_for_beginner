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
