// Online C compiler to run C program online
#include <stdio.h>
/*
===========================
*
**
***
****
*****
******
=========================
*/
int main() {
    int n;
    printf("how many rows you want to print\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; ++i) { // L1, row 
        for(int j = 0 ; j < i ; ++j) {
            printf("*");
        }
        printf("\n");
    }     
    return 0;
}
