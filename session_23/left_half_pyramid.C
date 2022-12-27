#include <stdio.h>
int main() {
  int h;
  printf("enter the hright of pyramid\n");
  scanf("%d",&h);
  for(int i = 1 ; i <= h ; ++i) { // L1
  
    for(int j = 0 ; j <h-i ; ++j) {
      printf(" ");
    }
    for(int j = 0 ; j < i ;++j)  {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
