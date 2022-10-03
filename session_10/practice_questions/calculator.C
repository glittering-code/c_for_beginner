#include <stdio.h>

int main()
{
     int a,b;
     printf("enter 2 numbers\n");
     scanf("%d %d",&a,&b);
     char operation;
     printf("please enter the operator(+ , - , *, /,%%)");
     scanf(" %c",&operation);
     if(operation == '+') {
         int answer = a+b;
         printf("answer is %d\n",answer);
     } else if(operation == '-') {
         int answer = a-b;
         printf("answer is %d\n",answer);
     } else if(operation == '*') {
         int answer = a*b;
         printf("answer is %d\n",answer);
     } else if(operation == '/') {
         float answer = a/b;
         printf("answer is %f\n",answer);
     } else if(operation == '%'){
         int answer = a%b;
         printf("answer is %d\n",answer);
     } else {
        printf("please enter the correct operator\n"); 
     }
    return 0;
}
