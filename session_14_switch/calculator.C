// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float a,b;
    printf("enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    float answer;
    printf("enter the operation u want to perform(+,-,*,/)\n");
    char op;
    scanf(" %c",&op);
    switch(op) {
        case '+' :
            answer = a+b;
            break;
        case '-' :
            answer = a-b;
            break;
        case '*' :
            answer = a*b;
            break;
        case '/' :
            answer = a/b;
            break;
        default :
            printf("this operator is not supported\n");
    }
    return 0;
}
