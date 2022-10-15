#include <stdio.h>

int main() {
     int yr;
    printf("enter the year\n");
    scanf("%d",&yr);
    //
    if((yr % 4 == 0) && (yr%100 != 0 || yr%400 == 0) ) {
        printf("\nleap year");
    } else {
        printf("\nnot a leap year");
    }

    return 0;
}
