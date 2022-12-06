// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //printf("Hello world");
    for(int i = 1 ; i <= 5 ; ++i) {
        for(int j = 1 ; j <= i ; ++j) {
            printf("%d ",i);
        }
        printf("\n");
    }
    

    return 0;
}
