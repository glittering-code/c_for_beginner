#include <stdio.h>
// 134 = 8
// 567 = 18
// 879 = 24
// 134/100 = 1 
// 134%100 = 34 
// 34 / 10 = 3
// 34 %10 = 4 
// 431
// 134 = 1*100 + 3*10+4*1
// 4*100 + 3*10+ 1*1 = 431
int main()
{
    int num;
    printf("enter a 3 digit number\n");
    scanf("%d",&num);
    int digit1 = num/100; // 1
    num = num%100; // 34
    int digit2 = num/10; // 3 
    num = num%10;
    int answer = digit1 + digit2 + num;
    printf("sum of digits is %d\n",answer);
    return 0;
}
