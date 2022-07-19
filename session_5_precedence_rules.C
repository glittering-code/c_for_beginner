#include <stdio.h>

int main()
{
    // a-b/c;
    // a = 10, b = 20, c = 2
    // a-b = -10
    // -5
    // b/c = 10
    // 0
    /*int a = 10;
    int b = 20;
    int c = 2;*/
    int a = 10, b=20, c = 2; //float f = 30.0;
    int ans = a-b/c;
    printf("result = %d\n",ans);
    int q1 = 30 * 1000 + 2768 ;
    printf("q1 = %d\n",q1);
    int q2 = 4 + 2 % - 8 ; // 2/8 = 2 
    printf("q2 = %d\n",q2);
    int q3 = 2 / 2 * 4 + 3 / 3 + 3; // 1 * 4 + 3/3+3 = 4 + 3/3+3 = 4 + 1 + 3 = 8 
    printf("q3 = %d",q3);
    

    
    return 0;
}
