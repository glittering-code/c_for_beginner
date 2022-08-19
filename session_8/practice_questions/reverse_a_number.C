#include <stdio.h>

int main()
{
    int num;
    printf("enter a 3 digit number\n");
    scanf("%d",&num);
    int digit1 = num/100; // 100 place digit
    num = num%100; // 34
    int digit2 = num/10; // 10s place digit 
    num = num%10;//last digit
    int reverse_number = num*100 + digit2* 10 + digit1;  
    printf("number after reversing is %d\n",reverse_number);
    return 0;
}
