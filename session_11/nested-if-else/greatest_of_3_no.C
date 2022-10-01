#include <stdio.h>
int main() {
   int a,b,c;
   printf("enter 3 numbers\n");
   scanf("%d %d %d",&a,&b,&c);
   if(a > b) {
       if(a > c) {
        printf("a is the greatest\n");   
       } else {
         printf("c is the greatest\n");  
       }
   } else {
       if(b > c) {
           printf("b is the greatest\n");
       } else {
           printf("c is the greatest\n");
       }
   }
}
