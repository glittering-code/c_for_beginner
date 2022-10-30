// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    switch(a) {
        case 1 :
        case 2 :
            printf("number is less than 3\n");
            break;
        case 3 :
        case 4 :
            printf("number is between 3 and 4\n");
            break;
        default :
            printf("number is greater than 4\n");
    }
    return 0;
}
