// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    char ip;
    do {
        printf("enter a number\n");
        scanf("%d",&a);
        int ans = a*a;
        printf("square of %d is %d\n",a,ans);
        printf("Do you want to enter another number. press 'y' for yes");
        scanf(" %c",&ip);
    } while(ip == 'y');
  
    return 0;
}
