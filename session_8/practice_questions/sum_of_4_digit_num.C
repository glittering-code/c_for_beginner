#include <stdio.h>
int main()
{
    int num;
    printf("enter a 4 digit number\n"); //6531
    scanf("%d",&num);
    int digit1 = num/1000; // 6
    num = num%1000; // 531
    int digit2 = num/100; // 5 
    num = num%100; //31
    int digit3 = num/10; // 3
    num = num%10; //1 
    int answer = digit1 + digit2 + digit3 + num;
    printf("sum of digits is %d\n",answer);
    return 0;
}
