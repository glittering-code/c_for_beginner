// Online C compiler to run C program online
#include <stdio.h>
// 21
// 21 * 1 = 21
// 21 * 2 = 42

int main() {
    int a;
    printf("Which table you want to print\n");
    scanf("%d",&a);
    int i = 1;
    printf("===========Table of %d is as follow============\n",a);
    while(i <= 10) {
        printf("%d\n",a*i);
        i++;
    }
    return 0;
}
