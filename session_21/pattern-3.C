// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //printf("Hello world");
    for(int i = 1 ; i <= 5 ; ++i) {
        for(int j = 5 ; j >= i ; --j) {
            printf("%d ",j);
        }
        printf("\n");
    }
    

    return 0;
}
