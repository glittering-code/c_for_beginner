#include <stdio.h>

int main()
{
    int a =5;
    //a++; // postfix
    int a1 = a++;
    printf("a = %d, a1 = %d\n",a,a1);
    
    int a2 = ++a;
    printf("a = %d, a2 = %d\n",a,a2);
    
    int b = 21;
    b--;
    printf("b = %d\n",b);

    return 0;
}
