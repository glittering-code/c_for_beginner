#include <stdio.h>
int main() {
    int yr;
    printf("enter the year\n");
    scanf("%d",&yr);
    if(yr%4 == 0) {
        if(yr %100 == 0) {
            if(yr % 400 == 0) {
                printf("leap year"); // 1600
            } else {
                printf("not a leap year"); // 1900,1700
            }
        } else {
            printf("leap year"); // 2024
        }
    } else {
        printf("not a leap year\n"); // 2022
    }
    return 0;
}
