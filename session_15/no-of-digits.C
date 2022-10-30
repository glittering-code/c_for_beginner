// count number of digits in a number
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    switch(a) {
        case 0 ... 9 :
            printf("it is single digit number\n");
            break;
        case 10 ... 99 :
            printf("It has 2 digits\n");
            break;
        case 100 ... 999 :
            printf("It has 3 digits\n");
            break;
        default :
            printf("number has more than 4 digits\n");
    }
    return 0;
}
