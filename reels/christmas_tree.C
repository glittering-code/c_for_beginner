#include <stdio.h>
int main() {
    int h;
    printf("enter height of christmas tree\n");
    scanf("%d",&h);
    for(int i = 1 ; i <= h ; ++i) {
      for(int j = 0 ; j < h-i ; ++j) {
        printf(" ");
      }
      for(int j = 0 ; j < 2*i-1 ; ++j) {
        printf("*");
      }
      printf("\n");
    }
    for(int i = 0 ; i < 3 ; ++i) {
      for(int j = 0 ; j < h-1 ; ++j) {
        printf(" ");
      }
      printf("|\n");
    }
    return 0;
}
