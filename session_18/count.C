// C program to Count no of positive, negative and zeros from n numbers entered through keyboard
#include <stdio.h>

int main() {
    printf("How many numbers you want to enter\n");
    int a;
    scanf("%d",&a);
    printf("enter %d numbers\n",a);
    int pos = 0, neg = 0 , zero = 0;
    for(int i = 0 ; i < a ; ++i) {
        int var;
        scanf("%d",&var);
        if( var > 0) {
            pos++;
        } else if(var < 0) {
            neg++;
        } else {
            zero++;
        }
    }
    printf("count of +ve numbers = %d\n",pos);
    printf("count of -ve numbers = %d\n",neg);
    printf("count of zeros  = %d\n",zero);
    return 0;
}
