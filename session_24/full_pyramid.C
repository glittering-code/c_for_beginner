// code to print full pyramid
#include <stdio.h>

int main() {
    int h;
    printf("enter the height of pyramid\n");
    scanf("%d",&h);
    for(int i = 1 ; i <= h ; ++i) { // L1 each row
      // code to print spaces
        for(int j = 0 ; j < h-i ; ++j) {
            printf(" ");
        }
      // code to print stars
        for(int j = 0 ; j < 2*i-1 ; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
