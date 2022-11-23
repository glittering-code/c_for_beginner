//C porgram to calculate sum of digits of a number
#include <stdio.h>

int main() {
    printf("enter a number\n");
    int a;
    scanf("%d",&a);
    int sum = 0;
    while(a != 0 ) {
        int rem = a%10;
        a = a/10;
        sum = sum + rem;
        //a = q;
    }
    //for(;a != 0 ; a = a/10)
    printf("sum of digits of number  is %d\n",sum);
    return 0;
}
