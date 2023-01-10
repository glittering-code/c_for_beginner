// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int h;
    printf("enter the height of pyramid\n");
    scanf("%d",&h);
    for(int i = 1 ; i <= h ; ++i) { // L1 each row
        for(int j = 0 ; j < h-i ; ++j) {
            printf(" ");
        }
        for(int j = 0 ; j < 2*i-1 ; ++j) {
            printf("*");
        }
        printf("\n");
    }
    for(int k = 0 ; k < h/2 ; ++k) {
      for(int i = 0 ; i < h-1 ; ++i) {
        printf(" ");
      }
      printf("|\n");
    }
    
    return 0;
}
