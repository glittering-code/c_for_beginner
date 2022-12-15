// Online C compiler to run C program online
#include <stdio.h>
/*
===============output====================
*****
****
***
**
*
=========================================
*/
int main() {
    // i <= 1
    for(int i = 5 ; i >= 1 ; --i) { // L1, row 
        for(int j = 0 ; j < i ; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
