// C program to calculate factorial of a number
#include <stdio.h>

int main() {
    printf("enter a number whose factorial you want to calculate\n");
    int a;
    scanf("%d",&a);
    int fact = 1;
    /*
    a = 5
    i = 5, fact = 0
    fact = 5, i = 4
    fact = 20 i = 3
    fact = 60 i = 2
    fact = 120 i = 1
    fact = 120 i = 0
    */
    for(int i = a; i >= 1 ; --i) { // a = 5
        fact = fact *i;
    }
    if(a < 0) {
        printf("factorial of -ve numbers is not allowed\n");
    } else {
        printf("factorial of number %d is %d\n",a,fact);
    }
    return 0;
}
