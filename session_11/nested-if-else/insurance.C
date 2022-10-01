// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int age;
    char gender, marital_status;
    printf("enter your age, gender(F/M) and marital_status respectively(M/U)\n");
    scanf("%d %c %c",&age,&gender,&marital_status);
    if(marital_status == 'M') {
        printf("you are insured\n");
    } else {
        if(gender == 'M') {
            if(age > 30) {
                printf("you are insured\n");
            } else {
                printf("you are not insured\n");
            }
        } else {
            if(age > 25) {
                printf("you are insured\n");
            } else {
                printf("you are not insured\n");
            
            }
        }
    }
    return 0;
}
