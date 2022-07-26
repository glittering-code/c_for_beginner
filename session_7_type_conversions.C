#include <stdio.h>

int main()
{
    int it = 2.3;
    printf("it = %d\n", it);
    float flt = 3;
    printf("f = %f\n",flt);
    printf("%d\n",2/9);
    //printf("Hello World");
    int i = 2, j = 3, k, l ; 
   float a, b ; 
   k = i / j * j ; //2/3*3 = 0*3 = 0 
   l = j / i * i ; // 3/2*2 = 1*2 = 2
   a = i / j * j ;// 2/3*3 = 0*3 = 0.00
   b = j / i * i ; // 3/2*2 = 1*2 = 2.00
printf( "%d %d %f %f\n", k, l, a, b ) ; 

float f = 7 / 22 * ( 3.14 + 2 ) * 3 / 5;
// 7/22 * 5.14*3/5 = 0 * 5.14*3/5 = 0.00 * 3/5 = 0.00/5 = 0.00
 printf("f = %f\n",f);



    return 0;
}
