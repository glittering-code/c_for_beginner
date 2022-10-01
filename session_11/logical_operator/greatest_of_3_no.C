// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a,b,c;
   printf("enter 3 numbers\n");
   scanf("%d %d %d",&a,&b,&c);
   if(a > b && a > c) {
       printf("a is greatest\n");
   } else if(b > a && b > c) {
       printf("b is the greatest\n");
   } else {
       printf("c is the greatest\n");
   }
    return 0;
}
