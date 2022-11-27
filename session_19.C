// Online C compiler to run C program online
#include <stdio.h>

int main() {
    for(int i = 0, j = 10; i < 10 && j > 0 ; i++ , j-- ) {
        printf("%d\t%d\n",i,j);
    }
    return 0;
}

/* output
0	10
1	9
2	8
3	7
4	6
5	5
6	4
7	3
8	2
9	1
*/
