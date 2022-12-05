#include <stdio.h>
int main() {
    int j = 0;
    while( j < 5 ) {
        int i = 1;
        while(i <= 10 ) {
            printf("%d ",i);
             ++i;
        }
        printf("\n");
        ++j;
    }
    return 0;
}
