#include <stdio.h>

int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("number(%d) is even\n",a);
    } else {
        printf("number(%d) is odd\n",a);
    
    return 0;
}
